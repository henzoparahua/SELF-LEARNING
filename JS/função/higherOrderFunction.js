// FUNÇÃO EM JS É FIRST-CLASS OBJECT (CITIZENS)
// HIGHER-ORDER FUNCTION
// JS TRATA FUNÇÃO COMO UM DADO

// CRIANDO DE FORMA LITERAL. TODA FUNÇÃO RETORNA UM UNDEFINED CASO NÃO SEJA DECLARADO UM VALOR
function fun1() { }
// NÃO É POSSIVEL OMITIR O BLOCO

// Armazenar em variavel
const fun2 = function(){ }

// Armazenar em um array
const array = [function(a, b) { return a+b}, fun1, fun2]
console.log(array[0](2, 3))

// Armazenar em um atributo de objeto
const obj = {}
obj.falar = function(){ return 'Opa'}
console.log(obj.falar())

// Passar função como param
function run(fun){
    fun()
}

run(function (){ console.log('Executando...')})

// UMA FUNÇÃO PODE RETORNAR/CONTER UMA FUNÇÃO

function soma(a,b){
    return function(c){
        console.log(a+b+c)
    }
}
soma(2, 3)(2)
const cincoMais = soma(2,3)
cincoMais(6)