console.log(typeof Object)
// Instanciando um objeto criado a partir de uma função:
console.log(typeof new Object)
console.log(typeof Object())
// É possivel omitir os parenteses

const Cliente = function(){}
console.log(typeof Cliente)
console.log(typeof new Cliente)

class produto {} // ES 2015 (ES6)
console.log(typeof produto)
console.log(typeof new produto)