const valores = [7.7, 8.9 , 3.3, 1.3]
//   Indices      0    1     2    3

console.log(valores[2])

// Undefined
console.log(valores[5]) 
console.log(valores.length)

valores.push({id:3}, false, null, 'teste')
console.log(valores)
// NÃO MISTURE DADOS EM UM ARRAY, EMBORA POSSIVEL, É UMA MÁ PRATICA.

console.log(typeof valores)