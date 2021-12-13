#include<iostream>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			cout<<"default constructor"<<endl;
			a=0;
			cout<<"a value is:"<<a<<endl;
			
		}
		test(int y)
		{
			cout<<"parameterised constructor"<<endl;
			a=y;
			cout<<"a value is "<<a<<endl;
		}
		test(const test &x)
		{
			cout<<"copy constructor"<<endl;
			a=x.a;
			cout<<"a "<<a<<endl;
		}
		~test()
		{
			cout<<"destructor"<<endl;
		}
};
int main()
{
	test t1;
	test t2(20);
	test t4(300);
	test t3(t4);
	
}
