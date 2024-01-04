#include <iostream>
#include <string>

using namespace std;

int main(){
    string drink = "A martini";
    string need = "Shaken, not stirred";

    cout << drink << ". " << need << "."<< endl;
    drink.swap(need);
    cout << drink <<". " << need << "."<< endl;

}