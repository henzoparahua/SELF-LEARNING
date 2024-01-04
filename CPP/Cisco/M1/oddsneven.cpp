#include <iostream>

using namespace std;

int main() 
{
	/* we will count the numbers here */
	int evens = 0, odds = 0;

	/* we will store the incoming numbers here */
	int number;

	/* read first number */
	std::cin >> number;

	/* 0 terminates execution */
	while (number != 0) {
		/* check if the number is odd */
		if (number % 2 == 1)		
			/* increase „odd” counter */
			odds++;
		else
			/* increase „even” counter */
			evens++;
		/* read next number */
		std::cin >> number;
	}
	/* print results */
	std::cout << "Even numbers: " << evens << endl;
	std::cout << "Odd numbers: " << odds << endl;
}