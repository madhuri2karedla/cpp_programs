#include<iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			cout<<"constructor is invoked"<<endl;
		}
		~sample()
		{
			cout<<"destructor is invoked"<<endl;
		}
};
int main()
{
	sample s;
	return 0;
}
