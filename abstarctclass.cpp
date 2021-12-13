#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class rectangle:public shapes
{
	private:
		int a,b;
	public:
		rectangle()
		{
			cout<<"enter a,b values";
			cin>>a>>b;
		}
		void area()
		{
			cout<<"area of rectangle is"<<a*b<<endl;
		}
};
class square:public shapes
{
	private:
		int a;
	public:
		square()
		{
			cout<<"enter a value";
			cin>>a;
		}
		void area()
		{
			cout<<"area of square is"<<a*a<<endl;
		}
};
class circle:public shapes
{
	private:
		int r;
	public:
		circle()
		{
			cout<<"enter r value";
			cin>>r;
		}
		void area()
		{
			cout<<"area of circle is"<<(float)3.14*r*r<<endl;
		}
};
int main()
{
	rectangle r,*rptr;
	rptr=&r;
	rptr->area();
	square s,*sptr;
	sptr=&s;
	sptr->area();
	circle c,*cptr;
	cptr=&c;
	cptr->area();
	return 0;
	
}
