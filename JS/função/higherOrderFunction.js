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