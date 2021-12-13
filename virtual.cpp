#include<iostream>
using namespace std;
class A
{
	public:
		void getA()
		{
		cout<<"method of class A"<<endl;
		}
};
class B: virtual public A
{
	public:
		void getB()
		{
			cout<<"method of class B"<<endl;
		}
};
class C: virtual public A
{
	public:
		void getC()
		{
			cout<<"method of class C"<<endl;
		}
};
class D:public B,public C
{
	public:
		void getD()
		{
			cout<<"method of class D"<<endl;
		}
};
int main()
{
	D d;
	d.getA();
	d.getB();
	d.getC();
	d.getD();
	return 0;
}
