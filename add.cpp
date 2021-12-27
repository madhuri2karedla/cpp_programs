#include<iostream>
using namespace std;
template<typename T1,typename T2>
void add(T1 a,T2 b)
{
	cout<<a+b<<endl;
}
int main()
{
	add(3,4);
	add(4,4.5);
	add(3.4,4.5);
}
