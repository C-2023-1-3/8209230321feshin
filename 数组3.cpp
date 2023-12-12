#include<iostream>
using namespace std;
int main() {
	bool a[100];
	for (int i = 0; i < 100; i++) {
		a[i] = false;
	}
	for (int i = 0; i < 100; i++) {
		for (int j = i; j < 100; j += i + 1) {
			if (a[j]) {
				a[j] = false;
			}
			else {
				a[j] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		if (a[i]) {
			cout << "L" << i + 1 << " ";
		}
	}
	return 0;
}