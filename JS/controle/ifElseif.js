Number.prototype.entre = function (inicio, fim){
    return this >= inicio && this <= fim
}
const imprimirResultado = function(nota){
    if(nota.entre(9,10)){
        console.log('Quadro de Honra')
    }else if(nota.entre(7, 8.99)){
        console.log('Aprovado')
    }else if(nota.entre(5, 6.99)){
        console.log('Recuperação')
    }else if(nota.entre(0, 4.99)){
        console.log('Reprovado')
    } else{
        console.log('Nota Invalida')
    }
    console.log('fim')
}
imprimirResultado(10)
imprimirResultado(8.9)
imprimirResultado(3.99)
imprimirResultado(5.03)
imprimirResultado(1.92)