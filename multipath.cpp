#include<iostream>
using namespace std;
class A
{
	protected:
		void getA()
		{
		cout<<"method of class A"<<endl;
		}
};
class B:public A
{
	protected:
		void getB()
		{
			getA();
			cout<<"method of class B"<<endl;
		}
};
class C:public A
{
	protected:
		void getC()
		{
			getA();
			cout<<"method of class C"<<endl;
		}
};
class D:public B,public C
{
	public:
		void getD()
		{
			getB();
			getC();
			cout<<"method of class D"<<endl;
		}
};
int main()
{
	D d;
	d.getD();
	return 0;
}
