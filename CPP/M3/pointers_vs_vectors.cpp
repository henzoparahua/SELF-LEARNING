#include <iostream>
#include <vector>

int main (){
    
	std::vector<int> vect {1, 5, 8};

	int *ptr = vect.data();
    // data() returns a pointer pointing to the first element of the vector

	int *ptr2 = &vect[0];
	std::cout << (ptr == ptr2) << std::endl;


    ptr2 = ptr2+1; // or 2 
    std::cout << *ptr2 << "\n";
    std::cout << (ptr == ptr2) << std::endl;
}