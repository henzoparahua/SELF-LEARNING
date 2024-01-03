#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string where_are_we = "I've got a feeling we're not in Kansas anymore";

  where_are_we.erase(38, 8).erase(25, 4);
  // erase(where it start, numb of chars that will be erased)
  cout << where_are_we << endl;
}