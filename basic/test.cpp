#include<iostream>
using namespace std;

//�߼���
//int main() {
//
//	int a = 10;
//	int b = 10;
//	cout << (a || b) << endl;
//
//	a = 0;
//	b = 10;
//	cout << (a || b) << endl;
//
//	a = 0;
//	b = 0;
//	cout << (a || b) << endl;
//	//ͬ��Ϊ�٣�����Ϊ��
//
//	system("pause");
//
//	return 0;
//}



//�߼����������
//int main() {
//
//	//�߼������ - �� && 
//	int a = 10;
//	int b = 10;
//
//	cout << (a && b) << endl;
//
//	a = 0;
//	b = 10;
//	cout << (a && b) << endl;
//
//	a = 0;
//	b = 0;
//	cout << (a && b) << endl;
//
//	system("pause");
//
//	return 0;
//
//}

//�߼����������
//int main() {
//
//	//�߼������ ��
//	int a = 10; //��C++�У�����0��Ϊ��
//	cout << !a << endl;
//
//	cout << !!a << endl;
//
//	system("pause");
//	
//	return 0;
//}

//�Ƚ������
//int main() {
//
//	//==
//	int a = 10;
//	int b = 20;
//
//	cout << (a == b) << endl;
//
//	//!=
//	cout << (a != b) << endl;
//
//	//>
//	cout << (a > b) << endl;
//
//	//<
//	cout << (a < b) << endl;
//
//	//>=
//	cout << (a >= b) << endl;
//
//	//<=
//	cout << (a <= b) << endl;
//
//	system("pause");
//
//	return 0;
//}


//��ֵ�����
//int main() {
//
//	//=
//	int a = 10;
//	a = 100;
//	cout << "a = " << a << endl;
//
//	//+=
//	a = 10;
//	a += 2;//a=a+2;
//	cout << "a = " << a << endl;
//
//	//-=
//	a = 10;
//	a -= 2;//a=a-2;
//	cout << "a = " << a << endl;
//
//
//	//*=
//	a = 10;
//	a *= 2;//a=a*2;
//	cout << "a = " << a << endl;
//
//
//	// /=
//	a = 10;
//	a /= 2;//a=a/2;
//	cout << "a = " << a << endl;
//
//	// %=
//	a = 10;
//	a %= 2;//a=a%2;
//	cout << "a = " << a << endl;
//
//	system("pause");
//	return 0;
//}


//int main() {
//
//	//1��ǰ�õ���
//	int a = 10;
//	++a;//�ñ���+1
//	cout << "a=" << a << endl;
//
//	//2�����õ���
//	int b = 10;
//	b++;//�ñ���+1
//	cout << "b=" << b << endl;
//
//	//3��ǰ�úͺ��õ�����
//	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
//	int a2 = 10;
//	int b2 = ++a2 * 10;
//	cout << "a2 = " << a2 << endl;
//	cout << "b2 = " << b2 << endl;
//
//	//���õ��� �Ƚ��б��ʽ���� ���ñ���+1
//	int a3 = 10;
//	int b3 = a3++ * 10;
//	cout << "a3 = " << a3 << endl;
//	cout << "b3 = " << b3 << endl;
//
//	system("pause");
//
//	return 0;
//}

////ȡģ����
//int main() {
//	//ȡģ���㣺�����ȡ����
//	int a1 = 10;
//	int b1 = 3;
//	cout << a1 % b1<<endl;
//
//	int a2 = 10;
//	int b2 = 20;
//
//	cout << a2 % b2 << endl;
//
//	int a3 = 10;
//	int b3 = 0;
//
//	//cout << a3 % b3 << endl;//�����������������Ϊ0.����Ҳ������ȡģ����
//
//	//����С���ǲ�������ȡģ�����
//	double d1 = 3.14;
//	double d2 = 1.1;
//
//	//cout << d1 % d2 << endl;
//
//	system("pause");
//
//	return 0;
//}


//��������
//int main() {
//
//	//�Ӽ��˳�
//	int a1 = 10;
//	int b1 = 3;
//
//	cout << a1 + b1 << endl;
//	cout << a1 - b1 << endl;
//	cout << a1 * b1 << endl;
//	cout << a1 / b1 << endl;//������������������Ȼ��С������С������ȥ��
//
//	int a2 = 10;
//	int b2 = 20;
//
//	cout << a2 / b2 << endl;//0.5,������������Ϊ0
//
//	int a3 = 10;
//	int b3 = 0;
//
//	//cout << a3 / b3 << endl;//������������������Ϊ0
//
//	//����С���������
//	double d1 = 0.5;
//	double d2 = 0.25;
//	cout << d1 / d2 << endl;//����Ľ��������С��
//
//
//	system("pause");
//
//	return 0;
//}