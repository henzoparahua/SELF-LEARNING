#include <iostream>

using namespace std;

int main() 
{
	int number;
	int max = -100000;
	int counter = 0;
	for (;;) {
		std::cin >> number;
		if (number == -1)
			break;
		counter++;
		if (number > max)
			max = number;
	}
	if (counter)
		std::cout << "The largest number is " << max << std::endl;
	else
		std::cout << "Are you kidding? You haven't entered any number!" << std::endl;
}