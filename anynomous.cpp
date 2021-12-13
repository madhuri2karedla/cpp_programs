#include<iostream>
using namespace std;
class sample
{
	private:
		 int x;
	public:
		sample(int n)
		{
			x=n;
			cout<<"constructor is invoked  "<<x<<endl;
		}
};
int main()
{
	sample s1(10);
	return 0;
}
