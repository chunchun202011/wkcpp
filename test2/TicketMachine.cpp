#include "TicketMachine.h"
#include<iostream>
using namespace std;

//price是const,需要初始化
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
