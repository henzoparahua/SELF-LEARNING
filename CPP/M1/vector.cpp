#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> int_vector(5);
    for (int i = 0; i < 5; i++) {
        int y = 5;
        int_vector[i] = i+y;
        std::cout << int_vector[i] << " ";
    }
    std::cout<<std::endl;
    
    vector<int> int_vector_two {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        int y = 5;
        int_vector_two[i] = int_vector_two[i]+y;
        std::cout << int_vector_two[i] << " ";
    } 
    
    std::cout<<std::endl;
    std::cout<<int_vector_two.size();

    return 0;
}
