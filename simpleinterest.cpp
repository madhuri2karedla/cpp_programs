#include<iostream>
using namespace std;
void simpleinterest(int,int,int);
void simpleinterest(int p=10,int t=20,int r=10)
{
	float si;
	si=(float)(p*t*r)/100;
	cout<<"simple interest is"<<si<<endl;
}
int main()
{
	int p,t,r;
	cout<<"enter p,t,r values:";
	cin>>p>>t>>r;
	simpleinterest(p,t,r);
	simpleinterest(p,t);
	simpleinterest(p);
	simpleinterest();
	return 0;
}
