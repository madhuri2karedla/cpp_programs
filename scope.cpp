//Develop a C++ program to illustrate scope resolution and namespaces.
#include<iostream>
using namespace std;
int b=10;
int main()
{
	int b=200;
	cout<<"local value of b is"<<b<<endl;
	cout<<"global value of b is"<<::b;
	return 0;
}
