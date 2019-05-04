#include "AccountHandler.h"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(void)
{
	int select;
	AccountHandler handler;

	while(true)
	{
		handler.PrintMenu();
		cout<<"Select : ";
		cin>>select;

		switch(select)
		{
			case handler.CREATE :
				handler.CreateAccount();
				break;
			
			case handler.DEPOSIT :
				handler.DepositMoney();
				break;

			case handler.WITHDRAW :
				handler.WithdrawMoney();
				break;

			case handler.PRINT : 
				handler.PrintAll();
				break;

			case handler.EXIT :
				cout<<"[Exit Program]"<<endl;
				return 0;

			default :
				cout<<"[Selection error]"<<endl;
				cout<<"[Please try again]"<<endl<<endl;
				break;
		}
	}

	return 0;
}
