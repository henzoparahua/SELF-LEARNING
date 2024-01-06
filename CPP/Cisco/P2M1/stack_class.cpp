#include <iostream>
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
}