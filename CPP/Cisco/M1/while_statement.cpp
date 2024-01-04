#include <iostream>

int main(){
    int number1, number2;
    bool yesorno;

    std::cin >> number1;
    number2 = 3;

    while (number1 < number2){
        std::cout << "meu amarelinho " << number1;
        number1++;
    }
    std::cin >> yesorno;
}