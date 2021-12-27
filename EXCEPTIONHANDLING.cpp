#include<iostream>
using namespace std;
int main()
{
	try
	{
	int a,b;
	cout<<"enter a and b values";
	cin>>a>>b;
	if(b!=0)
	cout<<a/b;
	else
	throw b;
}
catch(int x)
{
cout<<"ZERO DIVISION ERROR";
}
}
