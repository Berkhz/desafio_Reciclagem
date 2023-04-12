const form = document.querySelector('form');
const cpfInput = document.querySelector('#number');
const passwordInput = document.querySelector('#password');

form.addEventListener('submit', function(event) {
  event.preventDefault(); // previne o envio do formulário

  const cpf = cpfInput.value;
  const password = passwordInput.value;

  if (!cpf || cpf.length !== 11) {
    alert('Por favor, insira um CPF válido.');
    return;
  }

  if (!password || password.length < 6) {
    alert('Por favor, insira uma senha com pelo menos 6 caracteres.');
    return;
  }

  // Se chegarmos até aqui, as entradas do usuário estão corretas
  alert('Entrada válida!');

  // Aqui você pode adicionar o código para enviar as informações para o servidor
});
