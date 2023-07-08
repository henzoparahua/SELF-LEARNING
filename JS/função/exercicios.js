/* 1. Crie uma função que dado dois valores (passados como parametros) mostre 
no console a soma, subtração, multiplicação e divisão dos valores. */

const func = function(a, b) {
    console.log(a-b)
    console.log(a+b)
    console.log(a*b)
    console.log(a/b)
}

func(15, 3)

/*2. Os triângulos podem ser classificados em 3 tipos quanto ao tamanho de seus lados:
Equilátero: Os três lados são iguais. Isósceles: Dois lados iguais. Escaleno: Todos os lados são diferentes.
Crie uma função que recebe os comprimentos dos três lados de um triângulo e retorne sua classificação quanto
ao tamanho de seus lados. (Neste exemplo deve-se abstrair as condições matemáticas de existência de um
triângulo). */

const classif = function (a, b, c){
    if (a == b && b == c){
        console.log("Equilatero")
    } else if (a == b || a == c || b == c){
        console.log("Isosceles")
    } else {
        console.log("Escaleno")
    }
}

classif(5, 2, 3)

/* 3. Crie uma função que recebe dois parâmetros, base e expoente, e retorne a base elevada ao expoente. */

let baseExpo = (a, b) => console.log(Math.pow(a,b))

baseExpo(5, 2)

/* 4. Crie uma função que irá receber dois valores, o dividendo e o divisor. A função deverá imprimir o resultado
e o resto da divisão destes dois valores. */

const div = (a, b) => console.log("Resultado: " + a/b,"Resto: " + a%b)
div(5, 2)

/*5. Lidar com números em JavaScript pode dar muita dor de cabeça. Você já viu o que acontece quando faz o
seguinte comando no console: console.log(0.1 + 0.2); O resultado será: 0.30000000000000004. Outra coisa
importante de observar, é o fato que o ponto é utilizado no lugar da vírgula e vice versa. Com isso, vamos fazer
um exercício simples para mostrar dinheiro sempre da forma correta. Desenvolva uma função JavaScript para
que ela receba um valor como 0.30000000000000004 e retorne R$0,30 (observe a vírgula e o ponto). */

console.log(0.1 + 0.2); 
function zerotr(zerotrinta =  0.30000000000000004, moeda = 'R$'){
    zerotrinta = Math.round(zerotrinta*100)/100;
    zerotrinta = zerotrinta.toString();
    zerotrinta = zerotrinta.replace('.',',');
    console.log(moeda, zerotrinta)
}
zerotr()

/*06) Elabore duas funções que recebem três parâmetros: capital inicial, taxa de juros e tempo de aplicação. A
primeira função retornará o montante da aplicação financeira sob o regime de juros simples e a segunda
retornará o valor da aplicação sob o regime de juros compostos*/

const jurosSimples = function(capInicial, TaxJuros, tempo){
    TaxJuros = TaxJuros/100
    Simples = capInicial+capInicial*TaxJuros*tempo
    Simples = Math.round(Simples*100)/100;
    Simples = Simples.toString();
    Simples = Simples.replace('.',',');
    console.log("R$ "+ Simples)
}

jurosSimples(2000, 3, 12)

const jurosCompostos = function(capInicial, TaxJuros, tempo){
    TaxJuros = TaxJuros/100
    Composto = capInicial*(Math.pow(1+TaxJuros, tempo))
    Composto = Math.round(Composto*100)/100;
    Composto = Composto.toString();
    Composto = Composto.replace('.',',');
    console.log("R$ "+ Composto)
}
jurosCompostos(2000, 3, 4)

/*07) Uma das vantagens da programação é a automatização de tarefas que não gostamos de realizar. Dito isto,
elabore uma função cujo objetivo é resolver a fórmula de Bhaskara. Para isso, sua função deve receber três
parâmetros, “ax2”, “bx” e “c”, de tal modo que na equação: 3x² - 5x + 12 os valores seriam respectivamente: 3,
-5, 12. Como retorno deve ser passado um vetor que tem 2 valores um para cada possível resultado, mesmo
que os resultados sejam iguais. Caso o delta seja negativo, retorne, ao invés do vetor, um string com a frase:
“Delta é negativo”.*/

let formulaBhaskara = function(ax, bx, c) {
    let delta = Math.pow(bx, 2) - 4 * ax * c;
    if (delta < +1){
        console.log("delta negativo.")
    } else{
    delta = Math.sqrt(delta);

    let x1 = (-bx + delta) / (2 * ax);
    let x2 = (-bx - delta) / (2 * ax);
    console.log([x1, x2]);
  };
}
  formulaBhaskara(3, 15, 12);

/* 08) Pedro joga N jogos de basquete por temporada. Para saber como está ele está progredindo, ele mantém
registro de todos os as pontuações feitas por jogo. Após cada jogo ele anota no novo valor e confere se o
mesmo é maior ou menor que seu melhor e pior desempenho. Dada uma lista string = “pontuação1 pontuação2
pontuação3 etc..”, escreva uma função que ao recebê-la irá comparar os valores um a um e irá retornar um
vetor com o número de vezes que ele bateu seu recorde de maior número de pontos e quando fez seu pior
jogo. (Número do pior jogo).
Obs.: O primeiro jogo não conta como novo recorde do melhor.
Exemplo:
String: “10 20 20 8 25 3 0 30 1”
Retorno: [3, 7] (Significa que ele bateu três vezes seu recorde de melhor pontuação e a pior pontuação
aconteceu no sétimo jogo.) */