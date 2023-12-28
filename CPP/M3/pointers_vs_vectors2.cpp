#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers {1, 2, 3, 4, 6};
    int *ptr = numbers.data() + 1;
    std::cout << ptr[-1] << " " << ptr[0] << " " <<  ptr[1] << "\n" ;

    ptr[-1] = *ptr + ptr[1];

    std::cout << numbers[0] << std::endl;
}
