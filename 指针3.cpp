#include<iostream>
using namespace std;
void swap(int* a) {
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main() {
	int size; cout << "Enter the size of the array:";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the array:";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr+i << " ";
	}
	cout << endl;
	swap(arr);
	for (int i = 0; i < size; i++) {
		cout << *(arr+i) << " ";
	}
	delete[] arr;
}