#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int type:" <<testUnint<< endl;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?
	//��short��ʾ�ķ�ΧΪ-32768��-32767������65536��������unsigned intǿ��ת��Ϊshortʱ������short���ܱ�ʾ�ķ�Χ��
	//������������������չ��ɣ�Ӧ��65534��ȥ65536���õ�-2����-2��short���ܱ�ʾ�ķ�Χ�ڣ��ʽ��Ϊ-2��
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" <<static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << static_cast<unsigned int>(testUnint)<< endl; //16�������
	cout << "output in oct int type:" <<oct<< static_cast<int>(testUnint) << endl;//�˽����������ʵ��ת��int
	system("pause");
	return 0;
}