#include<iostream>
#include<cmath>
using namespace std;
class power
{
	int b,p;
	public:
		power(int n=2,int m=3)
		{
			b=n;
			p=m;
			cout<<pow(n,m)<<endl;
		}
};
int main()
{
	power x;
	power y(5);
	power z(3,4);
	return 0;
}
