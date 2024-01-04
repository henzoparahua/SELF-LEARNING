#include <iostream>

void greet(){
    std::cout <<" eita bicho " << "\n";
}
void eita(int tempo){
    while(tempo > 0){
        greet();
        tempo--;
    }
}

int main (){

    int tamanho_ego;
    std::cout << "O quão grande é seu ego? [km]" << std::endl;
    std::cin >> tamanho_ego;
    eita(1+tamanho_ego);

}