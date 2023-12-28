#include <iostream>

using namespace std;

int main() 
{
  cout << "Quantos num vc quer colocar chefao? ";
  int how_many_numbers;
  cin >> how_many_numbers;
  if(how_many_numbers <= 0 || how_many_numbers > 1000000) {
    cout << "vissi?" << endl;
    return 1;
  }
  int *numbers = new int[how_many_numbers];
  for(int i = 0; i < how_many_numbers; i++) {
    cout << "\ndigita o numero ae #" << i + 1 << ": ";
    cin >> numbers[i];
  }
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < how_many_numbers - 1; i++)
      if (numbers[i] > numbers[i + 1]) {
        swapped = true;
        int aux = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = aux;
      }
  } while (swapped);
  cout << endl << "aq o array:" << endl;
  for (int i = 0; i < how_many_numbers; i++)
    cout << numbers[i] << " ";
  cout << endl;
  delete[] numbers;
}