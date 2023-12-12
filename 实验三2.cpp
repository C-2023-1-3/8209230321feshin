#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int j = 2; j < num; j++) {
		if (num % j == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int c = 0;
	for (int i = 2; i > 0; i++) {
		int a=is_prime(i);
		if(a) {
			cout << i<<" ";
			c++;
			if (c % 10 == 0) {
				cout << endl;
			}
		}
		if(c == 200) {
		break;}
	}
}