#include<iostream>

using namespace std;

int factorial(int num) {
	// TODO 
	if (num < 2) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

int sumOfArr(int* arr, int size) {
	// TODO
	int result = 0;
	for (int idx = 0; idx < size; idx++) {
		result += arr[idx];
	}
	return result;
}	

int main() {
	cout << "Hello World\n";
	int arr[] = {1, 2, 3};
	cout << sumOfArr(arr, 3);
	return 0;
}