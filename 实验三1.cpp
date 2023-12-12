#include<iostream>
using namespace std;
int yue(int a, int b) {
	int c = 0;
	while (a % b) {
		c = a % b;
		a = b;
		b = c;
	}
	return b;
}
int bei(int c, int d) {
	int p = c * d / yue(c, d);
	return p;
}
int main() {
	int m = 0; int n = 0; cout << "Please enter m,n:";
	cin >> m >> n;
	int num1 = yue(m, n);
	int num2 = bei(m, n);
	cout << "m,n的最大公约数为：" << num1 << endl;
	cout << "m,n的最小公倍数为：" << num2;
}