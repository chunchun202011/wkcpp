#include<iostream>
#include<string>
using namespace std;
//数据的输入
int main() {
	//1、整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a = "<<a << endl;

	//2、浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f = "<<f << endl;

	//3、字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值" << endl;
	cin >> ch;
	cout << "字符型变量ch = " << ch << endl;

	//4、字符串型
	string str = "hello";
	cout << "请给字符串变量str赋值" << endl;
	cin >> str;
	cout << "字符串str = " << str << endl;


	//5、布尔类型
	//只能赋值1/0，不能true false
	bool flag= false;
	cout << "请给布尔型变量flag赋值" << endl;
	cin >> flag;
	cout << "布尔类型flag = " << flag << endl;//布尔类型只要非0都代表真


	system("pause");
	return 0;
}


//布尔类型
//int main() {
//	//1、创建bool数据类型
//	bool flag = true;
//	cout << flag << endl;
//
//	flag = false;
//	cout << flag << endl;
//
//	//本质上 1代表真 0代表假
//
//	//2、查看bool类型所占内存空间
//	cout << "bool类型所占空间" << sizeof(bool) << endl;
//
//	system("pause");
//
//	return 0;
//}

//转义字符
//int main() {
//
//
//	//换行符 \n
//	cout << "hello world\n";
//
//	//反斜杠 \\
//
//	cout << "\\" << endl;
//
//	//水平制表符 \t 作用：可以整齐地输出数据
//	cout << "aaa\thelloworld" << endl;
//	cout << "aaaa\thelloworld" << endl;
//	cout << "aaaaa\thelloworld" << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//	//1.字符型变量创建方式
//	char ch = 'a';
//	cout << ch << endl;
//
//	//2.字符型变量所占大小
//	cout << "char字符型变量所占内存：" << sizeof(char) << endl;
//
//	//3.字符型变量常见错误
//	//char ch2 = "b";//不能用双引号创建，要用单引号
//	//char ch2 = 'abcdef'; //报错：字符串常量中的字符过多  创建字符串常量时候，单引号内只能有1个字符
//
//
//	//4.字符型变量对应ASCII编码
//	cout << (int)ch << endl; //把字符型强转成整型，得到它对应的ascii码
//
//
//	system("pause");
//	return 0;
//}



////实型：浮点型
//int main() {
//	//1.单精度：float
//	//2.双精度：double
//	//默认情况下，输出一个小数，会显示6位有效数字
//	float f1 = 3.1415926f; //要以f结尾,因为默认双精度
//
//	cout << "f1=" << f1 << endl;
//
//	double d1 = 3.1415926;
//
//	cout << "d1=" << d1 << endl;
//
//	//统计float和double的内存空间
//	cout << "float占用的内存空间为：" << sizeof(float) << endl; //4个字节
//
//	cout << "double占用的内存空间为：" << sizeof(double) << endl;//8个字节
//
//	//科学计数法
//	float f2 = 3e2;//3 * 10 ^2 //整数也算一个小数，只是小数位为0 
//	cout << "f2=" << f2 << endl;
//
//	float f3 = 3e-2;//要并在一起
//	cout << "f3=" << f3 << endl;
//
//	return 0;
//}

//1.单行注释

//2.多行注释

/*
  main是一个程序的入口
  每个程序都必须有这么一个函数
  有且仅有一个
*/

//整型
//int main() {
//
//	//1.短整型 (-32768~32767)  32768取不到，左闭右开，如果超出上限，回到负的
//	short num1 = 32768;
//
//	//2.整型
//	int num2 = 32768;
//
//
//	//3.长整型
//	long num3 = 10;
//
//	//4.长长整型
//	long long num4 = 10;
//	 
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	cout << "num3 = " << num3 << endl;
//	cout << "num4 = " << num4 << endl;
//
//	cout << "short占用内存空间为" << sizeof(short) << endl; //放变量也行，数据类型也行
//	cout << "int占用内存空间为" << sizeof(int) << endl;
//	cout << "long占用内存空间为" << sizeof(long) << endl;
//	cout << "long long占用内存空间为" << sizeof(long long) << endl;
//
//	system("pause");
//	return 0;
//}


//常量的定义方式
//1.#define宏常量
//2.const修饰的变量

//1.#define宏常量
//#define Day 7
//
//int main()
//{
//	//在屏幕中输出hello world
//	//cout << "hello world" << endl;
//
//	//变量创建的语法：数据类型 变量名 = 变量初始值
//	int a = 10;
//
//	//2.const修饰的变量
//	const int month = 12;
//	//month = 24;//错误：const修饰的变量也称为常量
//	cout << "a=" << a << endl;
//
//	cout << "一周总共有" << Day << "天" << endl;
//
//	cout << "一年共有" << month << "月" << endl;
//
//	system("pause");
//
//	return 0;
//}


//标识符命名规则
//1.标识符不能是关键字
//2.标识符是由字母、数字、下划线构成的
//3.标识符第一个字符只能是字母或下划线
//4.标识符区分大小写
//int main() {
//
//	//1.标识符不能是关键字
//	// int int = 10;
//	//2.标识符是由字母、数字、下划线构成的
//	int abc = 10;
//	int _abc = 20;
//	int _123abc = 30;
//	//3.标识符第一个字符只能是字母或下划线
//	//int 123a = 10; //不允许
//
//	//4.标识符区分大小写
//	int aaa = 100;
//	//cout << AAA << endl;//AAA和aaa不是同一个名称
//
//	//建议：给变量起名最好见名知意
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
