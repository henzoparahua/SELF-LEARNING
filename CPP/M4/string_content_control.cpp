#include <iostream>
#include <string>

using namespace std;

void info(string& s){
    cout<<"content = \""<<s<<"\" ";
    cout<<"capacity = "<<s.capacity()<<endl;
    cout<<"is empty? "<<(s.empty() ? "yes" : "no")<<endl;
    cout<<"............................."<<endl;
}

int main() 
{
  string str = "content";
    
  info(str);
  str.resize(50, '?');
  info(str);
  str.resize(4);
  info(str);
  str.clear();
  info(str);
}