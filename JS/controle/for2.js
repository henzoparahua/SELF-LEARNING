const notas = [6.5, 4.5, 2.5, 7.8, 9.4, 10]

// pegar o indice do array
for (let i in notas){   
    console.log(i, notas[i])
}

const pessoa = {
    nome: 'Ana',
    sobrenome: 'Silva',
    idade: 29,
    peso: 67
}

for(let atributo in pessoa){
    console.log(`${atributo} = ${pessoa[atributo]}`)
}