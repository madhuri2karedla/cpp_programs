#include<iostream>
using namespace std;
class Test
{
	int i;
	public:
		
	Test()
	{
		cout<<"default constructor"<<endl;
		i=0;
	}
	Test(int a)
	{
		cout<<"parameterized constructor"<<endl;
		i=a;
	}
	Test(const Test &x)
	{
		cout<<"copy constructor"<<endl;
		i=x.i;
	}
	void show()
	{
		cout<<i<<endl;
	}
};
int main()
{
	Test a(100);
	a.show();
	Test b(a);
	b.show();
	return 0;
}
