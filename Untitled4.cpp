#include<iostream>
using namespace std;
class counter
{
	int c;
	public:
		counter()
		{
			c=0;
		}
		counter(int y)
		{
			c=y;
		}
		int get_count()
		{
			return c;
		}
		counter operator++()
		{
			return counter(++c);
		}
		counter operator++(int)
		{
			return counter(c++);
		}
};
int main()
{
	counter c1,c2,c3;
	cout<<"c1:"<<c1.get_count()<<endl;
	cout<<"c2:"<<c2.get_count()<<endl;	
	++c1;
	++c2;
	cout<<"c1:"<<c1.get_count()<<endl;
	cout<<"c2:"<<c2.get_count()<<endl;	
	c3=++c2;
	cout<<"c2:"<<c2.get_count()<<endl;
	c3=c2++;
	cout<<"c2:"<<c2.get_count()<<endl;
	cout<<"c3:"<<c3.get_count()<<endl;
	return 0;		
}
