let dobro = function(a){
    return a*2
}
dobro = (a)=>{
    return 2*a
}
// Return implicito
dobro = a => a*2
console.log(dobro(Math.PI))


let olha = function () {
    return 'olha'
}
olha = () => 'Olha'
olha = _ => 'Olha'
console.log(olha())


// This puxado dentro de uma arrowfunction

function Pessoa(){
    this.idade = 0
    
    setInterval(() => {
        this.idade++
        console.log(this.idade)
    })
}
new Pessoa;