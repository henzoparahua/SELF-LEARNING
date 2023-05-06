// ATRIBUIÇÃO POR VALOR X ATRIBUIÇÃO POR REFERENCIA

// ATRIBUIÇÃO POR REFERENCIA:
 {
const a = {nome: 'Teste'}
console.log(a)
// a constante a não tem o valor, mas sim o endereço; 
const b = a
// Ou seja, tanto a variavel a quanto b apontam para o mesmo endereço;
b.nome = 'Opa'
console.log(a)
// Ou seja, se eu mudar o B, o A vai sentir a mudança, e vice-versa;
}

// Atribuição por valor
// Um tipo primitivo faz uma copia por valor;
let c = 3
let d = c
d++
console.log(d)
console.log(c)

let valor // não inicializada
console.log(valor) // undefined
// console.log(valor2) !error -- isnotdefined

// valor foi definida
valor = null // ausencia de valor
console.log(valor)
// console.log(valor.toString()) Não da pra ler o nada. Burro.

const produto = {}
console.log(produto.preco)
// Podemos acessar até produto, onde preco não é encontrado.
// console.log(produto.preco.a) Não da pra acessar algo indefinido

produto.preco = 3.50
console.log(produto)

produto.preco = undefined // evite atribuir undefined
console.log(!!produto.preco)
console.log(produto)
delete produto.preco
console.log(produto)

produto.preco = null // Sem preço
console.log(produto.preco)
console.log(!!produto.preco)
console.log(produto)