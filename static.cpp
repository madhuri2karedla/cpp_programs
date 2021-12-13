#include<iostream>
using namespace std;
class sample
{
	private:
		int y;
		static int x;
	public:
		void read()
		{
			y=22;
			cout<<"x value is "<<x<<endl;
			cout<<"x address is "<<&x<<endl;
			cout<<"y value is "<<y<<endl;
			cout<<"y address is "<<&y<<endl;
		}
};
int sample::x=89;
int main()
{
	sample r1,r2,r3;
	r1.read();
	r2.read();
	r3.read();
	return 0;
}
