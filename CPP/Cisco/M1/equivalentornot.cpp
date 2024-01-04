#include <iostream>

int main (){
    int variable1 = 0, variable2 = 1;

    if (variable1 > 0) 
        std::cout<<variable1<<std::endl;
    if (variable1 != variable2)
        std::cout<<"oomaga"<<std::endl;
    if (variable1 == variable2)
        std::cout<<"hello everynyan"<<std::endl;

    if (!(variable1 && variable2) != 0)
        std::cout<<"ok é entendivel"<<std::endl;
    
}