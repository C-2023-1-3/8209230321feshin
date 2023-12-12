#include<iostream>
using namespace std;
#include<iomanip>
double celsius_to_fah(double cel) {
	double a = cel * 9 / 5 + 32;
	return a;
}
double fahrenheit_to_cels(double fah) {
	double b = (fah - 32) * 5 / 9;
	return b;
}
int main() {
	cout << "Celsius   Fahrenheit    |    Fahrenheit   Celsius" << endl;
	double i = 40; double j = 120;
	for (; i >= 31, j >= 30; i -= 1, j -= 10) {
		cout <<setprecision(1)<<fixed<< i << "        " << celsius_to_fah(i) << "          |   " 
		<< j << "         " <<setprecision(2)<<fixed<< fahrenheit_to_cels(j) << endl;
	}
}