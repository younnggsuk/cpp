#include <iostream>

using std::endl;
using std::cout;
using std::cin;

class FruitSeller
{
	private:
		int myMoney;
		int numApples;
		int APPLE_PRICE;
	
	public:
		void InitSeller(int money, int apples, int price)
		{
			myMoney = money;
			numApples = apples;
			APPLE_PRICE = price;
		}
		int SaleApples(int money)
		{
			if(money < 0)
			{
				cout<<"can't buy apple"<<endl;
				return 0;
			}

			int num = money/APPLE_PRICE;
			numApples -= num;
			myMoney += money;
			return num;
		}
		void ShowSellResult() const
		{
			cout<<"Apples : "<<numApples<<endl;
			cout<<"Money  : "<<myMoney<<endl;
		}
};

class FruitBuyer
{
	private:
		int myMoney;
		int numApples;
	
	public:
		void InitBuyer(int money)
		{
			myMoney = money;
			numApples = 0;
		}
		void BuyApples(FruitSeller &seller, int money)
		{
			if(money < 0)
			{
				cout<<"can't buy apple"<<endl;
				return;
			}

			myMoney -= money;
			numApples += seller.SaleApples(money);
		}
		void ShowBuyResult() const
		{
			cout<<"Apples : "<<numApples<<endl;
			cout<<"Money  : "<<myMoney<<endl;
		}
};

int main(void)
{
	FruitSeller *seller = new FruitSeller;
	FruitBuyer *buyer = new FruitBuyer;

	seller->InitSeller(0, 20, 1000);
	buyer->InitBuyer(5000);

	buyer->BuyApples(*seller, 2000);
	buyer->BuyApples(*seller, -123);

	cout<<"Seller"<<endl;
	seller->ShowSellResult();

	cout<<"Buyer"<<endl;
	buyer->ShowBuyResult();

	delete seller;
	delete buyer;

	return 0;
}	
