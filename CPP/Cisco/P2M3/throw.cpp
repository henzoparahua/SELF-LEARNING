#include <iostream>
using namespace std;

float div (float a, float b)
{
    if(b == 0.0)
        throw string ("Eita divisao por 0 ein inteligentao : (");
    return a/b;

}

int main ()
{
    float a, b;

    while (cin >> a) {
        try {
            cin >> b;
            cout << div(a, b) << endl;
        } catch (string &problem) {
            cout << "Eita chefao ce e burro hein" << endl;
            cout << problem << endl;
        }
    }
    cout << " cabo-se " << endl;
}