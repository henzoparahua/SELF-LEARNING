#include <iostream>
using namespace std;

int main() 
{
  /* the three numbers */
  int number1, number2, number3, number4;

  /* read three numbers */
  cin >> number1;
  cin >> number2;
  cin >> number3;

  
  int max = number1;

  if (number2 > max)
      max = number2;

  if (number3 > max)
      max = number3;

  std::cout << "The largest number is " << max << endl;

  cin >> number4;
}