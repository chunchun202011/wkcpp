#include "TicketMachine.h"
#include<iostream>
using namespace std;

//price��const,��Ҫ��ʼ��
TicketMachine::TicketMachine() :PRICE(0)
{

}


TicketMachine::~TicketMachine() {

}

void TicketMachine::showPrompt()
{
	cout << "something";
}

void TicketMachine::insertMoney(int money)
{
	balance += money;
}

void TicketMachine::showBalance() 
{
	count << balance;
}
