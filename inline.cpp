#include<iostream>
using namespace std;
inline int sum(int x,int y)
{
	return x+y;
}
int main()
{
	int a=19,b=38,c=0;
	cout<<"sum of a and b is ";
	c=sum(a,b);
	cout<<c;
	return 0;
}
