#include<iostream>
using namespace std;
int Max = 0;
class student {
private:int id; int grade;
public:
	void set(int a, int b);
	void max() {
		if (grade > Max) {
			Max = grade;
		}
	}
	void display() {
		if (Max == grade) {
			cout << id;
		}
	}
};
void student::set(int a, int b) {
	id = a; grade = b;
}
int main() {
	student arr[5];
	arr[0].set(2301, 90); 
	arr[1].set(2302, 85);
	arr[2].set(2303, 88);
	arr[3].set(2304, 93);
	arr[4].set(2305, 89);
	student* p = arr;
	for (int i = 0; i < 5; i++) {
		(p + i)->max();
	}
	for (int i = 0; i < 5; i++) {
		(p + i)->display();
	}
	return 0;
}