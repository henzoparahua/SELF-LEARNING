function Carro(velocidadeMaxima = 200, delta = 5){
    // Atributo privado
    let velocidadeAtual = 0

    // Metodo publico
    this.acelerar = function (){
        if(velocidadeAtual+delta <= velocidadeMaxima){
            velocidadeAtual+=delta
        } else{
            velocidadeAtual = velocidadeMaxima
        }
    }
    // Metodo publico
    this.getVelocidadeAtual = function (){
        return velocidadeAtual
    }
}