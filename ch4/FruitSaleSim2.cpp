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
		FruitSeller(int money=0, int apples=0, int price=0)
		{
			myMoney = money;
			numApples = apples;
			APPLE_PRICE = price;
		}
		int SaleApples(int money)
		{

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
		FruitBuyer(int money=0)
		{
			myMoney = money;
			numApples = 0;
		}
		void BuyApples(FruitSeller &seller, int money)
		{
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
	FruitSeller *seller = new FruitSeller(0, 20, 1000);
	FruitBuyer *buyer = new FruitBuyer(5000);

	buyer->BuyApples(*seller, 2000);

	cout<<"Seller"<<endl;
	seller->ShowSellResult();

	cout<<"Buyer"<<endl;
	buyer->ShowBuyResult();

	delete seller;
	delete buyer;

//	FruitSeller seller(0, 20, 1000);
//	FruitBuyer buyer(5000);
//	
//	buyer.BuyApples(seller, 2000);
//
//	cout<<"Seller"<<endl;
//	seller.ShowSellResult();
//
//	cout<<"Buyer"<<endl;
//	buyer.ShowBuyResult();
	
	return 0;
}	
