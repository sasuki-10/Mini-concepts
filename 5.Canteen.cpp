#include<iostream.h>
using namespace std;
int main()
{
	int order;
	cout<<"*********************WELCOME TO CANTEEN**********************";
	cout<<"\n1. CUSTER   Rs.50";
	cout<<"\n2. DOSA     Rs.75";
	cout<<"\n3. NOODLES  Rs.50";
	cout<<"\n4. IDLE     Rs.60 ";
	cout<<"\n5. TEA      Rs.10";
	cout<<"\n6. exit";

	while(order!=6)
	{
		cout<<"\nEnter your order:";
	        cin>>order;
		switch(order)
		{
			case 1:
				cout<<"Your order is custer....";
				cout<<"\nwait for 2 min";
				break;
			case 2:
				cout<<"Your order is dosa....";
				cout<<"wait for 2 min";
				break;
			case 3:
				cout<<"Your order is noodles....";
				cout<<"wait for 2 min";
				break;
			case 4:
			    cout<<"Your order is idle....";
				cout<<"wait for 2 min";
				break;
			case 5:
				cout<<"Your order is tea....";
				cout<<"wait for 2 min";
				break;
			default:
				cout<<"thank you ^_^";
		}
	}
}
