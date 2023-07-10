// Pessoa aponta para um endereço de memora, no qual existe o objeto criado. 
// A Constante apenas aponta para um endereço;
const pessoa = { nome: 'João'}
pessoa.nome = 'Pedro'
console.log(pessoa)

// Pessoa recebe um nomo objeto
// pessoa = { nome: 'Ana'}
// dá erro. não é possivel atribuir um objeto constante a um endereço diferente.

// Metodo que congela, ou seja, impossibiilita alterações;
Object.freeze(pessoa)
pessoa.nome = 'Maria'
// O objeto simplesmente ignora a atribuição.
pessoa.end = 'Rua ABC'
console.log(pessoa)
// Não é possivel realizar o CRUD, deixando o objeto em si constante.

const pessoaConstante = Object.freeze({nome: 'João'})
pessoaConstante.nome = 'Maria'
console.log(pessoaConstante)
