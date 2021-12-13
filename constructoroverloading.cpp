#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			length=10;
			breadth=20;
		}
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		Rectangle(int x)
		{
			length=x;
			breadth=x;
		}
		void area()
		{
			cout<<"area of rectangle="<<length*breadth<<endl;
		}
};
int main()
{
	Rectangle r1(13,34);
	Rectangle r2(10);
	Rectangle r3;
	r1.area();
	r2.area();
	r3.area();
	return 0;
}
