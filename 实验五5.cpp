#include<iostream>
using namespace std;
class Point {
private:
	int x; int y;
public:
	Point(int a, int b) {
		x = a; y = b;
	}
	void setPoint(int i, int j) {
		x += i; y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")";
	}
};
int main() {
	Point coordinate(60,80);
	coordinate.setPoint(1, 2);
	coordinate.display();
}