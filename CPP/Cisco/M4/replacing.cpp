#include <iostream>
#include <string>

using namespace std;

int main(){
    string do_it = " I'll think about it in one hour";
    string schudule = "today yesterday tomorrow";

    do_it.replace(21, 12, schudule, 16, 8);
    // replace(numb of chars passed, numb of chars you want, what you want to put, numb of chars passed of what you want, numb of char you want of the thing you put)
    cout << do_it<< endl;
}