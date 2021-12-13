#include<iostream>
using namespace std;
class sample
{
	private:
		 static int x;
	public:
		sample(int n)
		{
			x=n;
			cout<<"constructor is invoked with object no"<<x<<endl;
		}
		~sample()
		{
			cout<<"destructor is invoked with object no:"<<x<<endl;
			x--;
		}
};
int sample::x;
int main()
{
	sample s1(1);
	sample s2(2);
	sample s3(3);
	return 0;
}
