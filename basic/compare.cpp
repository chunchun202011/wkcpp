#include<iostream>
using namespace std;

int main() {

	//��ֻС������أ��ж���ֻ����

	//1��������ֻС�����ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2�����û�������ֻС�������
	cout << "������С��A�����أ�" << endl;
	cin >> num1;

	cout << "������С��B�����أ�" << endl;
	cin >> num2;

	cout << "������С��C�����أ�" << endl;
	cin >> num3;

	cout << "С��A������Ϊ��" << num1 << endl;
	cout << "С��B������Ϊ��" << num2 << endl;
	cout << "С��C������Ϊ��" << num3 << endl;

	//3���ж���ֻ����
	if (num1 > num2) {//A>B
		if (num1 > num3) //A > C
		{
			cout << "A���أ�����Ϊ��" << num1 << endl;
		}
		else { // C > A
			cout << "C���أ�����Ϊ��" << num3 << endl;
		}
	}
	else { //B>A
		if (num2 > num3) //B>C
		{
			cout << "B���أ�����Ϊ��" << num2 << endl;
		}
		else {//C>B
			cout << "C���أ�����Ϊ��" << num3 << endl;
		}
	}

	system("pause");
	return 0;
}
