#include<iostream>
using namespace std;

//逻辑或
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
//	//同假为假，其余为真
//
//	system("pause");
//
//	return 0;
//}



//逻辑运算符：与
//int main() {
//
//	//逻辑运算符 - 与 && 
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

//逻辑运算符：非
//int main() {
//
//	//逻辑运算符 非
//	int a = 10; //在C++中，除了0都为真
//	cout << !a << endl;
//
//	cout << !!a << endl;
//
//	system("pause");
//	
//	return 0;
//}

//比较运算符
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


//赋值运算符
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
//	//1、前置递增
//	int a = 10;
//	++a;//让变量+1
//	cout << "a=" << a << endl;
//
//	//2、后置递增
//	int b = 10;
//	b++;//让变量+1
//	cout << "b=" << b << endl;
//
//	//3、前置和后置的区别
//	//前置递增 先让变量+1 然后进行表达式运算
//	int a2 = 10;
//	int b2 = ++a2 * 10;
//	cout << "a2 = " << a2 << endl;
//	cout << "b2 = " << b2 << endl;
//
//	//后置递增 先进行表达式运算 后让变量+1
//	int a3 = 10;
//	int b3 = a3++ * 10;
//	cout << "a3 = " << a3 << endl;
//	cout << "b3 = " << b3 << endl;
//
//	system("pause");
//
//	return 0;
//}

////取模运算
//int main() {
//	//取模运算：结果是取余数
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
//	//cout << a3 % b3 << endl;//两个数相除，除数不为0.所以也做不了取模运算
//
//	//两个小数是不可以做取模运算的
//	double d1 = 3.14;
//	double d2 = 1.1;
//
//	//cout << d1 % d2 << endl;
//
//	system("pause");
//
//	return 0;
//}


//四则运算
//int main() {
//
//	//加减乘除
//	int a1 = 10;
//	int b1 = 3;
//
//	cout << a1 + b1 << endl;
//	cout << a1 - b1 << endl;
//	cout << a1 * b1 << endl;
//	cout << a1 / b1 << endl;//两个整数相除，结果依然是小数，将小数部分去除
//
//	int a2 = 10;
//	int b2 = 20;
//
//	cout << a2 / b2 << endl;//0.5,保留整数部分为0
//
//	int a3 = 10;
//	int b3 = 0;
//
//	//cout << a3 / b3 << endl;//两个数相除，结果不能为0
//
//	//两个小数可以相除
//	double d1 = 0.5;
//	double d2 = 0.25;
//	cout << d1 / d2 << endl;//运算的结果可以是小数
//
//
//	system("pause");
//
//	return 0;
//}