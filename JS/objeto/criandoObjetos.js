// USANDO A NOTAÇÃO LITERAL
const obj1 = {}
console.log(obj1)

// OBJECT EM JS
console.log(typeof Object, typeof new Object())
const obj2 = new Object
console.log(obj2)

// FUNÇÕES CONTRUTORAS
function Produto(nome, preco, desc){
    this.nome = nome
    this.getPrecoDesconto = () => {
        return preco * (1 - desc)
    }
}

const p1 = new Produto ('Caneta', 7.99, 0.15)
const p2 = new Produto ('Notebook', 29495.99, 0.25)
console.log(p1.getPrecoDesconto(), p2.getPrecoDesconto())

// FUNÇÃO FACTORY

function criarFuncionario(nome, salarioBase, faltas){
    return {
        nome, 
        salarioBase,
        faltas,
        getSalario(){
            return (salarioBase / 30)*(30-faltas)
        }
    }
}

const f1 = criarFuncionario('João', 6960, 4)
const f2 = criarFuncionario('Maria', 3960, 10)
const f3 = criarFuncionario('Henrique', 5960, 2)
console.log(f1.getSalario(), f2.getSalario(), f3.getSalario())

// Object.create
const filha = Object.create(null)
filha.nome = 'Ana'
console.log(filha)


// Uma função famosa que retorna um Objeto
const fromJSON = JSON.parse('{"info": "SOU UM JSON"}')
console.log(fromJSON.info)