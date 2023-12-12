#include<iostream>
using namespace std;
void bubbleSort(double a[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				double temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void printArray(double a[], int len) {
	for (int i = 0; i < len; i++) {
		cout << a[i];
	}
}
int main() {
	double arr[10];
	cout << "Enter an array of ten numbers:";
	for (int a = 0; a < 10; a++) {
		cin >> arr[a];
	}
	cout << "before:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	bubbleSort(arr,10);
	cout <<endl<< "after:" << endl;
	printArray(arr, 10);
}
	
	