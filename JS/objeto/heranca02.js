// Cadeia de prototipos (prototype chain)
Object.prototype.attr0 = 'Z' // cuidado ao usar isso.
const avo = {attr1: 'A'}                                  // Avo > Object.Prototype
const pai = {__proto__: avo, attr2: 'B', attr3:'3'}      // Pai > Avo
const filho = {__proto__: pai, attr3: 'C'}              // filho > Pai
console.log(filho.attr1, filho.attr2, filho.attr3, filho.attr0)

const carro = {
    velAtual: 0,
    velMax: 200,
    acelerarMais(delta){
        if (this.velAtual + delta <= this.velMax){
            this.velAtual += delta
        } else {
            this.velAtual = this.velMax
        }
    },
    status(){
        return `${this.velAtual}Km/h de ${this.velMax}Km/h`
    }
}

const ferrari = {
    modelo: 'F40',
    velMax: 324  // shadowing - sombreamento - sobreposição
}

const volvo = {
    modelo: 'V40',
    status(){
        return `${this.modelo}: ${super.status()}`
    }
}
// estabelece relação de prototipo entre dois objetos
Object.setPrototypeOf(ferrari, carro)
Object.setPrototypeOf(volvo, carro)

console.log(ferrari)
console.log(volvo)

volvo.acelerarMais(100)
console.log(volvo.status())

ferrari.acelerarMais(300)
console.log(ferrari.status())