#include <iostream>

/*
    if we omit any of its three components, it's presumed that there is a 1 there.
    If we do something like for (;;){} we will get an infinite loop.
     The conditional expression is not there, so it is automatically assumed 
     to be true. And because the condition never becomes false, the loop becomes infinite. 
*/
int main(){
    for(int i = 0; i < 100; i++)
    std::cout << i;

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