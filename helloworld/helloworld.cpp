#include<iostream>
#include<string>
using namespace std;
//���ݵ�����
int main() {
	//1������
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ���a = "<<a << endl;

	//2��������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���f = "<<f << endl;

	//3���ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���ch = " << ch << endl;

	//4���ַ�����
	string str = "hello";
	cout << "����ַ�������str��ֵ" << endl;
	cin >> str;
	cout << "�ַ���str = " << str << endl;


	//5����������
	//ֻ�ܸ�ֵ1/0������true false
	bool flag= false;
	cout << "��������ͱ���flag��ֵ" << endl;
	cin >> flag;
	cout << "��������flag = " << flag << endl;//��������ֻҪ��0��������


	system("pause");
	return 0;
}


//��������
//int main() {
//	//1������bool��������
//	bool flag = true;
//	cout << flag << endl;
//
//	flag = false;
//	cout << flag << endl;
//
//	//������ 1������ 0�����
//
//	//2���鿴bool������ռ�ڴ�ռ�
//	cout << "bool������ռ�ռ�" << sizeof(bool) << endl;
//
//	system("pause");
//
//	return 0;
//}

//ת���ַ�
//int main() {
//
//
//	//���з� \n
//	cout << "hello world\n";
//
//	//��б�� \\
//
//	cout << "\\" << endl;
//
//	//ˮƽ�Ʊ�� \t ���ã�����������������
//	cout << "aaa\thelloworld" << endl;
//	cout << "aaaa\thelloworld" << endl;
//	cout << "aaaaa\thelloworld" << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//	//1.�ַ��ͱ���������ʽ
//	char ch = 'a';
//	cout << ch << endl;
//
//	//2.�ַ��ͱ�����ռ��С
//	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;
//
//	//3.�ַ��ͱ�����������
//	//char ch2 = "b";//������˫���Ŵ�����Ҫ�õ�����
//	//char ch2 = 'abcdef'; //�����ַ��������е��ַ�����  �����ַ�������ʱ�򣬵�������ֻ����1���ַ�
//
//
//	//4.�ַ��ͱ�����ӦASCII����
//	cout << (int)ch << endl; //���ַ���ǿת�����ͣ��õ�����Ӧ��ascii��
//
//
//	system("pause");
//	return 0;
//}



////ʵ�ͣ�������
//int main() {
//	//1.�����ȣ�float
//	//2.˫���ȣ�double
//	//Ĭ������£����һ��С��������ʾ6λ��Ч����
//	float f1 = 3.1415926f; //Ҫ��f��β,��ΪĬ��˫����
//
//	cout << "f1=" << f1 << endl;
//
//	double d1 = 3.1415926;
//
//	cout << "d1=" << d1 << endl;
//
//	//ͳ��float��double���ڴ�ռ�
//	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl; //4���ֽ�
//
//	cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;//8���ֽ�
//
//	//��ѧ������
//	float f2 = 3e2;//3 * 10 ^2 //����Ҳ��һ��С����ֻ��С��λΪ0 
//	cout << "f2=" << f2 << endl;
//
//	float f3 = 3e-2;//Ҫ����һ��
//	cout << "f3=" << f3 << endl;
//
//	return 0;
//}

//1.����ע��

//2.����ע��

/*
  main��һ����������
  ÿ�����򶼱�������ôһ������
  ���ҽ���һ��
*/

//����
//int main() {
//
//	//1.������ (-32768~32767)  32768ȡ����������ҿ�������������ޣ��ص�����
//	short num1 = 32768;
//
//	//2.����
//	int num2 = 32768;
//
//
//	//3.������
//	long num3 = 10;
//
//	//4.��������
//	long long num4 = 10;
//	 
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	cout << "num3 = " << num3 << endl;
//	cout << "num4 = " << num4 << endl;
//
//	cout << "shortռ���ڴ�ռ�Ϊ" << sizeof(short) << endl; //�ű���Ҳ�У���������Ҳ��
//	cout << "intռ���ڴ�ռ�Ϊ" << sizeof(int) << endl;
//	cout << "longռ���ڴ�ռ�Ϊ" << sizeof(long) << endl;
//	cout << "long longռ���ڴ�ռ�Ϊ" << sizeof(long long) << endl;
//
//	system("pause");
//	return 0;
//}


//�����Ķ��巽ʽ
//1.#define�곣��
//2.const���εı���

//1.#define�곣��
//#define Day 7
//
//int main()
//{
//	//����Ļ�����hello world
//	//cout << "hello world" << endl;
//
//	//�����������﷨���������� ������ = ������ʼֵ
//	int a = 10;
//
//	//2.const���εı���
//	const int month = 12;
//	//month = 24;//����const���εı���Ҳ��Ϊ����
//	cout << "a=" << a << endl;
//
//	cout << "һ���ܹ���" << Day << "��" << endl;
//
//	cout << "һ�깲��" << month << "��" << endl;
//
//	system("pause");
//
//	return 0;
//}


//��ʶ����������
//1.��ʶ�������ǹؼ���
//2.��ʶ��������ĸ�����֡��»��߹��ɵ�
//3.��ʶ����һ���ַ�ֻ������ĸ���»���
//4.��ʶ�����ִ�Сд
//int main() {
//
//	//1.��ʶ�������ǹؼ���
//	// int int = 10;
//	//2.��ʶ��������ĸ�����֡��»��߹��ɵ�
//	int abc = 10;
//	int _abc = 20;
//	int _123abc = 30;
//	//3.��ʶ����һ���ַ�ֻ������ĸ���»���
//	//int 123a = 10; //������
//
//	//4.��ʶ�����ִ�Сд
//	int aaa = 100;
//	//cout << AAA << endl;//AAA��aaa����ͬһ������
//
//	//���飺������������ü���֪��
//	int num1 = 10;
//	int num2 = 10;
//	int sum = num1 + num2;
//
//	cout << sum << endl;
//
//	system("pause");
//
//	return 0;
//}
