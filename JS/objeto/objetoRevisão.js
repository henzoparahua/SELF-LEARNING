// coleção dinamica de pares chave/valor

const produto = new Object
produto.nome = 'Cadeira'

// Foge do padrão de identificadores do JS
produto['marca do produto'] = 'Generica'
produto.preco = 220

console.log(produto)
delete produto.preco
delete produto['marca do produto']
console.log(produto)

const carro = {
    modelo: 'A4',
    valor: 4302,
    proprietario: {
        nome: 'Raul',
        idade: 56,
        endereco: {
            logradouro: 'Rua ABC',
            numero: 1234
        }
    },
    condutores: [{
        nome: 'Juniro',
        idade: '15'
    }, {
        nome: 'Ana',
        idade: '42'
    }],
    calcularValorSeguro: function(){
        //...
    }
}
carro.proprietario.endereco.numero = 1000
carro['proprietario'] ['endereco']['logradouro'] = 'Av Gigante'
console.log(carro)

delete carro.condutores
delete carro.proprietario.endereco
delete carro.calcularValorSeguro
console.log(carro)
console.log(carro.condutores) // undefined