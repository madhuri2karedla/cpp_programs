#include<iostream>
using namespace std;
class rectangle
{
	private:
		int a,b;
	public:
		void get()
		{
			cout<<"enter a,b";
			cin>>a>>b;
		}
		void area()
		{
			cout<<"area is:"<<a*b;
		}
};
int main()
{
	rectangle r;
	r.get();
	r.area();
	return 0;
}
