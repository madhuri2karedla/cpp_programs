#include<iostream>
using namespace std;
void sum(int,int);
void sum(int a=10,int b=20)
{
	cout<<"addition is"<<a+b<<endl;
}
int main()
{
	int a,b;
	cout<<"enter a and b values";
	cin>>a>>b;
	sum(a,b);
	sum(a);
	sum(b);
	sum();
	return 0;
}
