#include <iostream>

int main () {
    int i = 15; int logneg = !i;
    //logneg:00000000000000000000000000000000000
    int u = 15, bitneg = ~u;
    std::cout << bitneg;
}