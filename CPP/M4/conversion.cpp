#include <iostream>
using namespace std;
int main(){

    long datatype = 1;
    long data = 1L;
    
    float a = 3.14;
    static_cast <double> (a);
    cout<<a<<endl;

    // logically we cant transfer the maximum value for some variables

    int i = 2146231132;
    short s = i;
    if (i == s)
        cout<<"equal" << endl;
    else
        cout<<"not equal" << endl;
    cout<<s<<"\n"<<i<<endl;


    // how to not lose accuracy? Never transfer big values to "lower spaces"
    // we can do this
    float f = 1234.5678;
    double d = f;
    d == f? cout<<"positive" : cout<<"negative";
    cout<<endl;
    // but not this.
    d = 123456.789012;
    f = d;
    d == f? cout<<"positive" : cout<<"negative";
    
}