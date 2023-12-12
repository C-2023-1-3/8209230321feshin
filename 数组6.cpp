#include<iostream>
using namespace std;
const int num1 = 26;
const int num2 = 99;
void counts(char list[], int count[]) {
	for (int i = 0; i < num1; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < num2; i++) {
		count[list[i] - 'a']++;
		count[list[i] - 'A']++;
	}
}
void print(int count[]) {
	for (int i = 0; i < num1; i++) {
		if (count[i]) {
			cout << (char)(i + 'a') << ": " << count[i] << " times" << endl;
		}
	}
}
int main() {
	char list[num2];
	int count[num1];
	cout << "Please enter a string:";
	cin.getline(list, num2);
	counts(list, count);
	print(count);
}