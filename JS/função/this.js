function f1(){
    console.log(this === window)
}
f1()
true
document.getElementsByTagName('body')[0].onclick = f1

// THIS PODE VARIAR DE ACORDO COM QUEM CHAMOU A FUNÇÃO
// THIS DO FUNCTION PODE VARIAR
// THIS DO ARROWFUNCTION NUNCA VARIA [Associado ao local que a função foi escrita]