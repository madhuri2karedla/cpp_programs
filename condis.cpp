#include<iostream>
using namespace std;
class Test
{
	public:
		test()
		{
			cout<<"\n constructor called";
		}
		~Test()
		{
			cout<<"\n destructor called"<<endl;;
		}
};
int main()
{
	Test t;
	return 0;
}

