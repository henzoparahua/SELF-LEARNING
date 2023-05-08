function teste1(num){
    if(num>7)
        console.log(num)
        console.log('Final')
}
teste1(6)
teste1(9)

function teste2(num) {
    if(num > 7); { // cuidado com ;
        console.log(num)
    }
}
teste2(9)
teste2(6.4)