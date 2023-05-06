// JSON é o formato textual
// Object é a anotação literal de objetos

/**
 * let i =0
 * console.log(i++)
 * let o = 0
 * console.log(++o)
 * console.log(o++) 
 * */

// PAR DE CHAVES REPRESENTA A FORMA LITERAL DE UM OBJETO
// Object em JS é uma coleção de chaves e valores;
const prod1 = {}
prod1.nome = 'Celular Ultra Mega'
prod1.preco = 4998.90
prod1['DescontoLegal'] = 0.40

console.log(prod1)

const prod2 = {
    preco: 79.90,
    nome: 'Camisa Polo',
    obj: {
        blabla: 1,
        obj:{
            blabla:2
        }
    }
}
console.log(prod2)

//JSON
'{"nome": "Camiseta Polo", "preco":"79.90"'
