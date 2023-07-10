// Herança é um principio de OO para herdar atributos e comportamentos para não precisar dar ctrl c ctrl v
// Tirar a necessidade de reutilizar codigos
// Caminhando na hierarquia de objetos, resumidamente, funcao -> objeto -> console.

const ferrari = {
    modelo: 'F40',
    velMax: 324
}
const volvo = {
    modelo: 'V40',
    velMax: 200
}
    // atravez disso posso acessar o objeto pai do objeto.
console.log(ferrari.__proto__)
console.log(ferrari.__proto__ === Object.prototype)
console.log(volvo.__proto__ === Object.prototype)
console.log(Object.prototype.__proto__)

function MeuObjeto(){}
console.log(typeof Object, typeof MeuObjeto)
console.log(Object.prototype, MeuObjeto.prototype)