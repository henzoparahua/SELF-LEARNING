#include <string>
#include <iostream>

using namespace std;

int main(){
    struct Student{
        string name = "";
        float time_spent;
        int recent_chap;
    };
    Student magasouza;
    magasouza.time_spent = 1.5;
    float i = magasouza.time_spent;
    std::cout<<i;
}