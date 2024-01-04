#include <iostream>

int main (){
    bool value1 = true, value2 = false;
    if (value1&value2){ // bitwise conjunction
    std::cout << "bitwise conjunction"<<std::endl;
    }
    if (value1|value2){ // bitwise disjunction
        std::cout << "bitwise disjunction"<<std::endl;
    }
    if (value1 & ~value2){ // bitwise negation
        std::cout << "bitwise negation"<<std::endl;
    }
    if (value1^value2){ // bitwise exclusive or (once a value is equal to false)
        std::cout << "bitwise exclusive or";
    }
    
    
}