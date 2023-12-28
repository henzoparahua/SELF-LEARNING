#include <iostream>

// just uses param and returns
int func(int a){
    a = a*a;
    //*u = a;
    return a;
}

// uses parameter by reference (every manipulation will affect)
void funcao(int& a){
    a = a*a;
}

int main (){
    int i = 3, *u = &i;
    int b = func(i);
    std::cout << b << "\n";
    
    int c = i;
    funcao(c);
    std::cout << c << "\n";
    c = c+1;
    std::cout << c;
}