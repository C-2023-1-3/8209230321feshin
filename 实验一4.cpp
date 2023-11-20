#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int type:" <<testUnint<< endl;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?
	//答：short表示的范围为-32768到-32767，共计65536个数，将unsigned int强制转换为short时超出了short所能表示的范围，
	//发生了数据溢出，按照规律，应将65534减去65536，得到-2，而-2在short所能表示的范围内，故结果为-2。
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" <<static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << static_cast<unsigned int>(testUnint)<< endl; //16进制输出
	cout << "output in oct int type:" <<oct<< static_cast<int>(testUnint) << endl;//八进制输出，将实数转成int
	system("pause");
	return 0;
}