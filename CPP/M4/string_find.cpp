#include <iostream>
#include <string>
using namespace std;

int main(){
    string eita = "Meu nome es enzo nicaragua";
    string needed = "nicaragua";

    if (eita.find(needed) != string::npos)
        cout<<"OOOOOOMAGAAAAAA "<<endl;
    else    
        cout<<"eita bicho"<<endl;

    int es = eita.find("es");
    if (es != string::npos)
        cout<<"eita mais uma vez"<<endl;
}