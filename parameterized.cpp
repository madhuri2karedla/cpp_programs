#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int l,int b)
		{
			length=l;
		    breadth=b;
		}
		void area()
		{
			cout<<"area of Rectangle is:"<<length*breadth;
			
		}			
};
int main()
{
	int a,b;
	cout<<"enter a,b values:";
	cin>>a>>b;
	Rectangle r(a,b);
	r.area();
	return 0;
}
