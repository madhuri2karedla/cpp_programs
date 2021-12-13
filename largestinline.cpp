#include<iostream>
using namespace std;
inline int largest(int a,int b)
{
	return (a>b?a:b);
}
int main()
{
	int c,a=25,b=67;
	c=largest(a,b);
	cout<<"largest of a and b is"<<c;
	return 0;
}
