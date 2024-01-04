#include <iostream>

using namespace std;

void new_greet(string greet = "bomba", int repeats = 1)
{
	for (int i = 0; i < repeats; i++)
		cout << greet << endl;
}

int main() 
{
	new_greet("Hello", 2);
	new_greet("Good morning");
	new_greet("Hi", 1);
    new_greet();
}