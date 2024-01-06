#include <iostream>
using namespace std;

int stack[100];
int SP =0;

void push(int value){
    stack[SP++] = value;
}
int pop(){
    return stack[--SP];
}
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
class AddingStack:Stack {
    private:
        int sum;
    public:
        AddingStack();
        void push(int value);
        int pop();
        int get_sum();
};

AddingStack::AddingStack():Stack(){
    sum = 0;
}
void AddingStack::push(int value){
    sum += value;
    Stack::push(value);
}
int AddingStack::pop(){
    int val = Stack::pop();
    sum-=val;
    return val;
}
int AddingStack::get_sum(){
    return sum;
}

int main(){
    AddingStack superstack;
    for (int i = 1; i < 10; i++){
        superstack.push(i);
    }
    cout<<superstack.get_sum()<<endl;
    for(int i = 1; i < 10; i++){
        superstack.pop();
    }
    cout << superstack.get_sum()<<endl;

}