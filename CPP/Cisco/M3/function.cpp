#include <iostream>
    
float square(float x){
    return x*x;
}

void voidfunc(){
    std::cout << "\n eita bicho \n";
    return;
}

int main (){

    std::cout << square(2.0);
    voidfunc();
}
