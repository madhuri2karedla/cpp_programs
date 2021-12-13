#include<iostream>
using namespace std;
class bank
{
	private:
		int account_no;
		string name;
		float balance;
		float amount;
	public:
		void get()
		{
			cout<<"enter account no";
			cin>>account_no;
			cout<<"enter  account holder name";
			cin>>name;
			cout<<"enter balance:";
			cin>>balance;
			
		}
		void show()
		{
			cout<<"balance ="<<balance<<endl;
		}
		void withdrawl()
		{
			cout<<"enter amount to be withdraw:";
			cin>>amount; 
			if((balance-amount)<1000)
			cout<<"you should maintain minimum balance";
			else
			balance-=amount;
		}
		void deposit()
		{
			cout<<"enter amount to be deposit:";
			cin>>amount;
			balance+=amount;	 
		}
	
};
int main()
{
	bank b;
	int ch;
	do{
	
	cout<<"enter your choice 1 to get "<<endl;
	cout<<"enter your choice 2 to show "<<endl;
	cout<<"enter your choice 3 to withdraw "<<endl;
	cout<<"enter your choice 4 to deposit "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			b.get();
			break;
		case 2:
			b.show();
			break;
		case 3:
			b.withdrawl();
			break;
		case 4:
			b.deposit();
			break;
		case 5: exit(0);
	}}while(ch!=5);
	return 0;
}
