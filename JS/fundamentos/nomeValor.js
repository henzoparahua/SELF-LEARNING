// par nome / valor
const saud = 'opa' // <-- contexto lexico 1
// ou seja, local em que sua variavel foi definida fisicamente no codigo.

function exe(){
    const saud = 'faalaaaaa' // contexto lexico 2
    // contexto especifico da função, limitada a suas barreiras
    return saud
    // js sempre vai do menor ao maior, ou seja, nesta função saud existe com esse valor.
}
// Objetos são grupos aninhados de pares nome/valor.
const cliente = {
    nome: 'Pedro',
    idade: 23,
    peso: 34.5,
    endereco: {
        logradouro: 'Rua Manuel Bitencourt e Sá',
        numero: '38'
    }
}
console.log(saud)
console.log(exe())
console.log(cliente)
console.log(cliente.nome)