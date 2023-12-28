#include <iostream>

int main(){
    int i = 1;
    i ? i = 3 : i = 10;
    
    i < 5 ? i = 7 : i = 5;

    i < 5 ? i = i+4 : --i;
    std::cout << i;
}