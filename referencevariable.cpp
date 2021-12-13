#include<iostream>
using namespace std;
void fun(int &y)
{
	cout<<"y="<<y<<endl;
	y+=100;
}
int main()
{
	int x=10;
	fun(x);
	cout<<"x="<<x;
	return 0;
}
