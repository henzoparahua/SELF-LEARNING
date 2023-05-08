function BoaNoticia(nota){
    if(nota >= 7){
        console.log('Aprovado com ' + nota)
    }
}
BoaNoticia(8.1)
BoaNoticia(3.4)

function nocap(valor){
    if (valor){
       // apenas se o valor significa verdadeiro ou falso
       console.log('É verdade... '+ valor) 
    }
}
nocap()
nocap(null)
nocap(undefined)
nocap(NaN)
nocap('')
nocap(0)
nocap(-1)
nocap(' ')
nocap('?')
nocap([])
nocap([1,2])
nocap({})