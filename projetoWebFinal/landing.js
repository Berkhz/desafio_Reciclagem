// Obtém a versão do software (substitua "SuaVersaoDoSoftware" pelo valor correto)
var versaoSoftware = "2.0";
// Obtém a data atual
var dataAtual = new Date().toLocaleDateString();
// Atualiza o conteúdo dos elementos no HTML
document.getElementById("software-version").textContent = "Versão: " + versaoSoftware;
document.getElementById("current-date").textContent = "Data: " + dataAtual;