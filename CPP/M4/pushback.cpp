#include <iostream>
#include <string>

using namespace std;

int main(){
    string stringe;
    for (char c = 'A'; c <= 'Z'; c++)
        stringe.push_back(c);
    cout << stringe << endl;
}