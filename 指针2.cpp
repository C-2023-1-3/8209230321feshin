#include<iostream>
using namespace std;
#include<cmath>
int parseHex(const char* const hexString) {
	int sum = 0; int m = 0;
	int b = strlen(hexString);
	for (int i = 0; i < b; i++) {
		if (hexString[i] >= 'a' && hexString[i] <= 'f') {
			m = (hexString[i] - 87) * pow(16, b - 1 - i);
		}
	    if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			m = (hexString[i] - 55) * pow(16, b - 1 - i);
		}
		if (hexString[i] >= '0' && hexString[i] <='9' ) {
			m = (hexString[i] - 48) * pow(16, b - 1 - i);
		}
		sum = sum + m;
	}
	return sum;
}
int main() {
	char hexString[99];
	cout << "Enter a hexString:"; cin.getline(hexString, 99);
	cout << parseHex(hexString);
}