#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y,z;
	public:
		sample()
		{
			x=22;
			y=89;
			z=29;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		void operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	sample s;
	-s;//s.operator -();
	s.show();
	return 0;
}
