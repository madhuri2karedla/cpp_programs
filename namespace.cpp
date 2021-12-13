//Develop a C++ program to illustrate scope resolution and namespaces.
#include<iostream>
using namespace std;
namespace one
{
	int b=34;
}
using namespace one;
int main()
{
	int b=200;
	cout<<"local value of b is"<<b<<endl;
	cout<<"global value of b is"<<one::b;
	return 0;
}
