#include<iostream>
using namespace std;

//int main(){
//
//	//选择结构：单行if语句
//	//用户输入分数，如果大于600，考上一本
//
//	//1.用户输入分数（要有变量保存分数）
//	int grade = 0;
//	cout << "请输入您的分数：" << endl;
//	cin >> grade;//从键盘接收输入
//
//	//2.打印用户输入的分数
//	cout << "您的分数是：" << grade << endl;
//
//	//3.判断分数是否大于600，如果大于输出
//	//注意条件：if条件后面不要加分号，否则if语句与分号配对，不管条件满不满足都会执行
//	//if (grade > 600);
//	//如果大于600分
//		//>700:北大
//		//>650:清华
//		//其余：人大
//	if (grade > 600)
//	{
//		cout << "恭喜您考上一本大学！" << endl;
//		//嵌套if语句
//		if (grade > 700)
//		{
//			cout << "您能考上北京大学！" << endl;
//		}
//		else if (grade > 650) 
//		{
//			cout << "您能考上清华大学！" << endl;
//		}
//		else
//		{
//			cout << "您能考上人民大学！" << endl;
//		}
//	}
//	else if(grade > 500)//不大于600
//	{
//		cout << "恭喜您考上二本大学" << endl;
//	}
//	else if(grade > 400)
//	{
//		cout << "恭喜您考上三本大学" << endl;
//	}
//	else
//	{
//		cout << "未考上本科大学，请再接再厉" << endl;
//	}
//
//	return 0;
//}
