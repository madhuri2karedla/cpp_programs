#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
	public:
		sample(sample &s)
		{
			x=s.x;
	    }
		sample()
		{
			cout<<"enter x value:"<<endl;
			cin>>x;
	    }
		void show()
		{
			cout<<"x value is:"<<x<<endl;
		}
};
int main()
{
	sample s1;
	s1.show();
	sample s2(s1);
	s2.show();
	return 0;
}
