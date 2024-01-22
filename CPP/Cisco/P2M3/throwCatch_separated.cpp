#include <iostream>
using namespace std;

float do_calculations(float a, float b, float c, float d)
{
    float x = 1.;
    if(a == 0.0)
        throw string ("Bad arg a");
    x /= a;
    if(b == 0.0)
        throw string ("Bad arg b");
    x /= b;
    if(c == 0.0)
        throw string ("Bad arg c");
    x /= c;
    if(d == 0.0)
        throw string ("Bad arg d");
    return x /= d;
}
int main ()
{
    try {
        do_calculations(1, 2, 3, 0);
    } catch(string &exc){
        cout << "Eita chefao reveja seus conceitos, olha aqui: " << exc << endl;
    }
}