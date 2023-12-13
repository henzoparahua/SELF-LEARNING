#include <iostream>

using namespace std;
   /* 
    --------------------------------------------------------------------------
        We cannot use short or long when it comes to a float(8 digits)
        type. for this porpose, its used double (15-17 digits) and long 
        double (33-36 digits). As it can be supposed, the double doubles
        the value that is usually supported from float

        Also its good to mention that some hardwares offer even longer
        floating-point types like 256-bit long octuple, it would be like
        a long long double.

        In order to convince the compiller that any of your literals is actually
        a float, you should use the suffix 'f' or 'F'. It means that 3.1515f are
        of type float
                                                                            */
int main()
{
	double a = 0.1;
	double b = 0.2;
	double c = 0.3;

	if(a + b != c)
		cout << "Your computer is out of order";
}