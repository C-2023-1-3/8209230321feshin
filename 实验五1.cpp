#include<iostream>
using namespace std;
class Time             
{
    private:             
	int hour;
	int minute;
	int sec;
    public:
	void input() {
		cin >> hour >> minute >> sec;
	}
	void show() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1;          
	t1.input();
	t1.show();
	return 0;
}