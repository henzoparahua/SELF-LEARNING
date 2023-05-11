function soma(){
    let soma = 0
    for (i in arguments){ // toda função tem o array arguments
        soma += arguments[i]
    }
    return soma
}
console.log(soma())
console.log(soma(1))
console.log(soma(2.3,1.5,7.2,7,9.3,1.45,7.5,0.65))
console.log(soma(1.1,2.2,"teste"))
console.log(soma('a'),'b','c')