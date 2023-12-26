#include<iostream>
using namespace std;
class volumecount {
private:
	int length; int width; int height; int volume;
public:
	void input(){
		cin >> length >> width >> height;
	}
	void volumecounts() {
		volume = length * width * height;
	}
	void display() {
		cout << volume << endl;
	}
};
int main() {
	volumecount cuboid1; volumecount cuboid2; volumecount cuboid3;
	cout << "Please enter the length,width,height of three cuboids:" << endl;
	cuboid1.input();
	cuboid2.input();
	cuboid3.input();
	cuboid1.volumecounts();
	cuboid2.volumecounts();
	cuboid3.volumecounts();
	cout << "volume1=";
	cuboid1.display();
	cout << "volume2=";
	cuboid2.display(); 
	cout << "volume3=";
	cuboid3.display();
}