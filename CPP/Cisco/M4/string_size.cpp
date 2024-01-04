#include <iostream>
#include <string>

using namespace std;

void info(string& s)
{
  cout << "length = " << s.length() << endl;
  cout << "capacidade = " << s.capacity() << endl;
  cout << "limite = " << s.max_size() << endl;
  cout << ".............................." << endl;
}

int main() 
{
  string the_string = "content";

  info(the_string);
  
  for (int i = 0; i < 10; i++)
    the_string += the_string;
  info(the_string);
}