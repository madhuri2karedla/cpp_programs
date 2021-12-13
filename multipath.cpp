#include<iostream>
using namespace std;
class A
{
	protected:
		A()
		{
			cout<<"constructor A is invoked"<<endl;
		}
		~A()
		{
			cout<<"Destructor A is invoked"<<endl;
		}
};
class B:public A
{
	protected:
		B()
		{
			cout<<"constructor B is invoked"<<endl;
		}
		~B()
		{
			cout<<"Destructor B is invoked"<<endl;
		}
};
class C:public A
{
	protected:
		C()
		{
			cout<<"constructor C is invoked"<<endl;
		}
		~C()
		{
			cout<<"Destructor C is invoked"<<endl;
		}
};
class D:public B,public C
{
	public:
		D()
		{
			cout<<"constructor D is invoked"<<endl;
		}
		~D()
		{
			cout<<"Destructor D is invoked"<<endl;
		}
};
int main()
{
	D d;
	return 0;
}
