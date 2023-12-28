#include <string>
#include <iostream>

int main(){
    string line_of_types;
    cin >> line_of_types;
    cout<<line_of_types<<endl;
    //cin treats spaces so it cannot be done
    //  try: to be or not to be.
    //  r: to

    // if you want to input a whole line of text you have to use getline. 
    getline(cin, line_of_types);
    cout << line_of_types <<endl;
}