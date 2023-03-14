/* Selecionando elementos do DOM */
const form = document.querySelector('form');
const user = document.querySelector('#user');
const password = document.querySelector('#password');

/* Adicionando um evento de submit no formulário */
form.addEventListener('submit', (event) => {
event.preventDefault(); // previne o comportamento padrão do formulário

/* Obtendo os valores dos campos de usuário e senha */
const username = user.value.trim();
const pass = password.value.trim();

/* Verificando se os campos não estão vazios */
if (username === '' || pass === '') {
alert('Por favor, preencha todos os campos');
return;
}

/* Verificando se a senha possui pelo menos 8 caracteres */
if (pass.length < 8) {
alert('A senha deve ter pelo menos 8 caracteres');
return;
}

/* Enviando os dados para um servidor */
fetch('/login', {
method: 'POST',
body: JSON.stringify({ username, pass }),
headers: {
'Content-Type': 'application/json'
}
})
.then(response => {
if (response.ok) {
alert('Login realizado com sucesso');
} else {
alert('Erro ao realizar login');
}
})
.catch(error => {
console.error('Erro ao realizar login', error);
})
});

/* Adicionando um evento de input nos campos de usuário e senha */
user.addEventListener('input', () => {
if (user.value.trim() !== '') {
user.classList.remove('input-error');
}
});

password.addEventListener('input', () => {
if (password.value.trim() !== '') {
password.classList.remove('input-error');
}
});

/* Função para exibir mensagem de erro nos campos de usuário e senha */
function showInputError(element) {
element.classList.add('input-error');
}