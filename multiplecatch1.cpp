#include<iostream>
using namespace std;
int main()
{
	try
	{
	int a[5]={1,2,3,4,5};
	int index,i;
	cout<<"enter index";
	cin>>index;
	if(index>=5)
	throw index;
	else if(index<0)
	throw "array index cannot be negative";
	else
	{
		a[index]=100;
		for(i=0;i<5;i++)
		cout<<a[i]<<"\t";
	}
	
}
catch( int x)
{
	cout<<"array index out of range";
}
catch(const char *m)
{
	cout<<m;
}
}

