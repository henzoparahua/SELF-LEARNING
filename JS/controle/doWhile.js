function getInteiroAleatorioEntre(min, max){
    const valor = Math.random()*(max - min) + min
    return Math.floor(valor)
}

let opcao = -1

// Do while obrigatoriamente executa o while mesmo que opcao seja -1
 do {
    opcao = getInteiroAleatorioEntre(-1,10)
    console.log(opcao)
} while (opcao != -1)

console.log('Até a proxima!')