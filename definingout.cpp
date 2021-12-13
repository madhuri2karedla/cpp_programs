#include<iostream>
using namespace std;
class rectangle
{
	private:
		int a,b;
	public:
		void get();
		void area();
		
};
void rectangle::get()
		{
			cout<<"enter a,b";
			cin>>a>>b;
		}
void rectangle::area()
		{
			cout<<"area is:"<<a*b;
		}
int main()
{
	rectangle r;
	r.get();
	r.area();
	return 0;
}		
