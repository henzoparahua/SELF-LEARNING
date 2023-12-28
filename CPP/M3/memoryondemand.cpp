#include <iostream>
using namespace std;
int main(){
    float *array = new float[20];
    int *count = new int;

    delete [] array;
    delete count;

    	float *arr = new float[5];

	for (int i = 0; i < 5; i++)
		arr[i] = i * i;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << endl;

	delete[] arr;

}