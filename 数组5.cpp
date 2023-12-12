#include <iostream>
using namespace std;
int indexof(const char[], const char[]);
int main() {
	const int size = 99;
	char s1[size]; char s2[size];
	cout << "Enter the first string:"; cin.getline(s1, 99);
	cout << "Enter the second string:"; cin.getline(s2, 99);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")" << "is" << indexof(s1, s2);
}
int indexof(const char* s1, const char* s2) {
	int a, b, index;
	a = strlen(s1);
	b = strlen(s2);
	bool* s3 = new bool[a];
	for (int m = 0; m < a; m++) {
		s3[m] = false;
	}
	for (int i = 0; i < b - a + 1; i++) {
		int n = 0;
		for (int j = 0, k = i; j < a, k < i + a; j++, k++) {
			if (s1[j] == s2[k]) {
				index = i;
				s3[j] = true;
				n++;
			}
		}
		if (n == a) {
			return index;
		}
		if (i == b - a && n != a) {
			return -1;
		}
	}
}


