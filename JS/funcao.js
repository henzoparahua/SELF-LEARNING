console.log(typeof Object)
class Produto {}
console.log(typeof Produto)

// Funcão sem retorno
function imprimirSoma(a, b){
    console.log(a + b)
}
imprimirSoma(2, 3)
imprimirSoma(2)
// 2 + undefined = NaN 

// Funcao com retorno
function soma(a, b = 0) {
    // caso B não receba nenhum numero, ele será 0
    return a+b
}
console.log(soma(2))
console.log(soma(2,3))
console.log(soma())

// Armazenando uma função em uma variavel;
const imprimirMultiplicação = function (a, b){
    console.log(a*b)
}
imprimirMultiplicação(2,5)

// Armazenando uma funcao arrow em uma variavel
const soma1 = (a,b) => {
    return a+b
}
console.log(soma(2,3))

// Retorno implicito
// Funcao de linha unica, que retorna o valor
const subtracao = (a,b) => a-b
console.log(subtracao(3,2))

const imprimir2 = a => console.log(a)
imprimir2('Legal!!!')