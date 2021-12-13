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
class B:public A
{
	public:
		void getB()
		{
			getA();
			cout<<"method of class B"<<endl;
		}
};
class C:public A
{
	public:
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
			cout<<"method of class D"<<endl;
		}
};
int main()
{
	D d;
	//d.getA();
	d.getB();
	d.getC();
	d.getD();
	return 0;
}
