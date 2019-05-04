#include "AccountHandler.h"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

enum 
{
	CREATE=1,
	DEPOSIT,
	WITHDRAW,
	PRINT,
	EXIT
};

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
			case CREATE :
				handler.CreateAccount();
				break;
			
			case DEPOSIT :
				handler.DepositMoney();
				break;

			case WITHDRAW :
				handler.WithdrawMoney();
				break;

			case PRINT : 
				handler.PrintAll();
				break;

			case EXIT :
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
