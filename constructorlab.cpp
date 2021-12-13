#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float breadth;
	public:
		Rectangle()
		{
			cout<<"enter length&breadth of a Rectangle:";
			cin>>length>>breadth;
		}
		void area()
		{
			cout<<"area of Rectangle is:"<<length*breadth;
			
		}			
};
int main()
{
	Rectangle r;
	r.area();
	return 0;
}
