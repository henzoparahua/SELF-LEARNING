#include <iostream>
using namespace std;

class Class{
    static int Counter;
    public:
        Class(){
            ++Counter;
        };
        ~Class(){
            --Counter;
            if(Counter == 0)
                cout << "GO!GO! ZEPPELI" <<endl;
        };
        static void Many(){
            cout<<Counter<<" PIZZA MOUZARELLA"<<endl;
        }
};
int Class::Counter = 0;
int main(){
    Class:: Many();
    Class a;
    Class b;
    b.Many();
    Class c;
    Class d;
    d.Many();
}