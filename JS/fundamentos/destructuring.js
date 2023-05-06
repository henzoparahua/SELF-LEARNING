// RECURSO DO ES2015

const pessoa = {
    nome:'ana',
    idade: 5,
    endereco: {
        logradouro: 'Rua ABC',
        numero: 100
    }
}

// TIRE DE DENTRO DO OBJETO / OBJETO: PESSOA
const {nome, idade} = pessoa
console.log(nome, idade)

// Atribuindo o valor a uma val
const { nome: n, idade: i} = pessoa
console.log(n,i)

const {sobrenome, bemHumorado = true} = pessoa
console.log(sobrenome, bemHumorado)
console.log(pessoa)

const { endereco: { logradouro, numero, cep}} = pessoa
console.log(logradouro, numero, cep)

// DESTRUCTURING EM ARRAYS
const [a] = [10]
console.log(a)
const [n1, n2, n3, n5, n6 = 0] = [10, 6, 7, 4]
console.log(n1,n3,n5,n6)

const [, [, nota]] = [[, 7, 6], [8, 6, 4]]
console.log(nota)

// USANDO SEM DESTRUCTURING
/*
function rand({ min = 0, max = 1000}) {
    const valor = Math.random() * (max - min) + min
    return Math.floor(valor)
}
const obj = {max:50, min: 40}
console.log(rand(obj))
console.log(rand({min:955}))
console.log(rand({}))
// ERROR: min & max undefined
// console.log(rand())
*/

// USANDO OPERADOR DESTRUCTURING
function rand([min = 0, max = 1000]){
    if (min > max) [min, max] = [max, min]
        const valor = Math.random()* (max - min) +min
        return Math.floor(valor)
}
console.log(rand([50, 40]))
console.log(rand([922]))
console.log(rand([, 922]))
console.log(rand([]))