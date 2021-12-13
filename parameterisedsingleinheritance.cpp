#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		A(int m)
		{
			x=m;
			cout<<"VALUE OF X IS "<<x<<endl;
		}
};
class B:public A
{
	protected:
		int y;
	public:
		B(int n):A(22)
		{
			y=n;
			cout<<"VALUE OF Y IS "<<y<<endl;
		}
};
int main()
{
	B b(89);
	return 0;
	
}

