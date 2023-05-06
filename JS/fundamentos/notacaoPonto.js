console.log(typeof console)
console.log(Math.ceil(6.1))

// . é usado para navegar entre objetos
// cd = ponto
const obj1 = {}
obj1.nome = 'bola'
obj1['nome'] = 'bola2'

console.log(obj1.nome)

function Obj(nome){
    this.nome = nome
    this.exec = function(){
        console.log('Exec...')
    }
    // This cria um atributo publico
}

const obj2 = new Obj('Cadeira')
console.log(obj2.nome)
const obj3 = new Obj('Mesa')
console.log(obj3.nome)
obj3.exec()