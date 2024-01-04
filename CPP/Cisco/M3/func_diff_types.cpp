#include <iostream>
using namespace std;
int num(int x){
    return x*3;
}

float num(float x){
    return x*3;
}

double num(double x){
    return x*3;
}
int main (){
    cout<<num(1.f);
}