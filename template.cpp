#include<iostream>
using namespace std;
template<typename T>
void square(T a,T b)
{
	cout<<a*b<<endl;
}
int main()
{
	square(3,4);
	square('a','b');
	square(3+4,4+5);
	square(3.4,4.5);
}
