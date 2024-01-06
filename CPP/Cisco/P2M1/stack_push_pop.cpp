#include <iostream>

using namespace std;

class Stack{
    private:
        int stackstore[100];
        int SP;
    public:
        void push(int value);
        int pop(){
            return stackstore[--SP];
        }
};
void Stack::push(int value){
    stackstore[SP++] = value;
}

int main(){
    push(3);
    push(2);
    push(1);
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
}