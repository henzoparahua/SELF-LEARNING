function compras(trabalho1, trabalho2){
    const comprarSoverte = trabalho1 || trabalho2
    const comprarTv50 = trabalho1 && trabalho2
    // const comprarTv32 = !!(trabalho1 ^ trabalho2) //bitwise xor
    const comprartv32 = trabalho1 != trabalho2
    const manterSaudavel = !comprarSoverte // Operador unario

    return {comprarSoverte, comprarTv50, comprartv32, manterSaudavel}
}
console.log(compras(true, true))
console.log(compras(true, false))
console.log(compras(false, false))