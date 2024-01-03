#include <iostream>
#include <string>

using namespace std;

int main(){
    string quote = "vissi meu amarelinho", anyword = "warframecoolgame";
    quote.insert(3,2, ' ').insert(4, anyword, 3, 2);
    cout<<quote<<endl;
}