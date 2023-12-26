#include<iostream>
using namespace std;
class Student              
{
public:                   
	void display();
	void set_value() {
		cin >> num >> name >> sex;
	}
private:
	int num;
	char name[20];
	char sex;
};
