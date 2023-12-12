#include<iostream>
using namespace std;
int peach(int day) {
	int rs = 0;
	if (day == 10) {
		rs = 1;
	}
	else {
		rs = (peach(day + 1) + 1) * 2;
	}
	return rs;
}
int main() {
	int day = 1;
	cout << "第一天共摘" << peach(day) << "个桃子";
}