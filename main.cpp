#include<iostream>

using namespace std;

int factorial(int num) {
	// TODO 
}

int sumOfArr(int* arr, int size) {
	// TODO
	if (size == 0) {
		return 0;
	}
	else {
		return arr[size - 1] + sumOfArr(arr, size - 1);
	}
}	

int main() {
	cout << "Hello World\n";
	int arr[] = {1, 2, 3};
	cout << sumOfArr(arr, 3);
	return 0;
}
