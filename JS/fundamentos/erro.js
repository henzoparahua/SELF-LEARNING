function tratarErroeLancar(erro){
    // throw new Error ('...')
    // throw 10
    // throw true
    throw{
        nome: erro.name,
        msg: erro.message,
        date: new Date
    }
}
function imprimirNomeGritando(obj){
    try{
        console.log(obj.name.toUpperCase()+'!!11!!')
    } catch(e){
        tratarErroeLancar(e)
    } finally {
        console.log('Mesmo que de problema ou não, o finally é chamado.')
    }
}
const obj = { nome: 'Roberto'}
imprimirNomeGritando(obj)