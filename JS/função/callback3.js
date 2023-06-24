// Exemplo de callback no browser
document // Aponta para o DOM
document.getElementsByTagName('body')[0].onclick = function(e){
    // Acessa elementos dentro do DOM a partir de uma tag
    console.log('O evento ocorreu!')
} 