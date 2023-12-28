#include <iostream>

int main(){

    int i = sizeof(char), *pointer = &i;
    std::cout << *pointer << "\n";
    
    int j = sizeof 3.1415;
    std::cout << j << "\n";
    // it will be set to 8 as double values occupy 64 bits according to IEEE-754
    
    int k = sizeof k;
    std::cout<<k;
    // Values of int type occupy 32 bits, 4 bytes in most modern computers, 
    // But its not guarantee that this is true in all cases

    std::cout << "This computing environment uses:" << std::endl;
    std::cout << sizeof(char) << " byte for chars" << std::endl;
    std::cout << sizeof(bool) << " byte for bools" << std::endl;
    std::cout << sizeof(short int) << " bytes for shorts" << std::endl;
    std::cout << sizeof(int) << " bytes for ints" << std::endl;
    std::cout << sizeof(long int) << " bytes for longs" << std::endl;
    std::cout << sizeof(float) << " bytes for floats" << std::endl;
    std::cout << sizeof(double) << " bytes for doubles" << std::endl;
    std::cout << sizeof(int *) << " bytes for pointers" << std::endl;
}