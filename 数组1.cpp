#include<iostream>
using namespace std;
int main() {
	cout << "Please enter ten numbers:";
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cout << a[0] << " ";
	for (int i = 1; i < 10; i++) {
		int con = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (a[i] == a[j]) {
				con = 0;
				break;
			}
		}
		if (con) {
			cout << a[i] << " ";
		}
	}
}