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
		 friend void operator -(sample &m);
	};
		void operator -(sample &m)
		{
			m.x=-m.x;
			m.y=-m.y;
			m.z=-m.z;
		}
int main()
{
	sample s;
	-s;//s.operator -();
	s.show();
	return 0;
}
