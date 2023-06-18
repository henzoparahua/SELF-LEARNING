// THIS E BIND

//ECMA2015
const pessoa = {
    saudacao: 'Bom Dia',
    falar(){
        console.log(this.saudacao)
    }
}
pessoa.falar()

// Saudacao aponta para um this diferente, ou seja, falar não é encontrado.
const falar = pessoa.falar
falar();

// Passa um objeto no qual o this seja puxado também -- Ele orienta o this
const falarDePessoa = pessoa.falar.bind(pessoa)
falarDePessoa()

const falar2 = pessoa.falar
falar2()
// A amarração dura apenas quando o bind é chamado.