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
			cout<<"account no is "<<account_no<<endl;
			cout<<"account holder name"<<name<<endl;
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
	b.get();
	b.show();
	char ch;
	cout<<"enter your choice either w or d"<<endl;
	cin>>ch;
	if(ch=='w')
	b.withdrawl();
	else if(ch=='d')
	b.deposit();
	else
	cout<<"invalid choice";
	b.show();
	return 0;
}
