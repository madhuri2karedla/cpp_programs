#include<iostream>
using namespace std;
inline float aot(int b,int h)
{
	return (float)1/2*b*h;
}
int main()
{
	int a=25,b=67;
	float c=aot(a,b);
	cout<<"aot of a and b is"<<c;
	return 0;
}
