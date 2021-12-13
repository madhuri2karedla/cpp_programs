#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		void area()
		{
			cout<<"area is :"<<length*breadth;
		}
		
};
int main()
{
	int a,b;
	cout<<"a,b are:";
	cin>>a>>b;
	Rectangle r(a,b);
	r.area();
	return 0;
}
