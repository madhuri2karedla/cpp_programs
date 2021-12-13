#include<iostream>
using namespace std;
class Circle
{
	private:
		float radius;
	public:
		Circle()
		{
			cout<<"enter radius of a circle:";
			cin>>radius;
		}
		void area()
		{
			cout<<"area of circle is:"<<(float)3.14*radius*radius;
			
		}			
};
int main()
{
	Circle c;
	c.area();
	return 0;
}
