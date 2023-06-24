const notas = [7.7, 6.4, 6.3, 1.2, 4.3, 10, 5.6]

// Sem usar callback

const notasBaixas = []
for (let i in notas){
    if(notas[i] < 7){
        notasBaixas.push(notas[i])
    }
}
console.log(notasBaixas)

// Com callback

const notasBaixas2 = notas.filter(function (nota){
    return nota < 7
})
console.log(notasBaixas2)


const notasMenorQue7 = nota => nota < 7
const notasBaixas3 = notas.filter(notasMenorQue7)
console.log(notasBaixas3)