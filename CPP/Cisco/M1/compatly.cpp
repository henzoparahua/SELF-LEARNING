#include <iostream>
int main() 
{
      int counter = 5;

        while(counter != 0) {
               std::cout << "I am an awesome program " << counter << std::endl;
               counter--;
      }

        counter = 5;

        while(counter) {
                std::cout << "I am an awesome program " << counter << std::endl;
                counter--;
       }

        counter = 5;

        while(counter--)
                std::cout << "I am an awesome program " << counter << std::endl;

}
