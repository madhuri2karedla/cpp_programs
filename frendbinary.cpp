#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag;
	public:
		complex()
		{
			cout<<"enter real and imag";
			cin>>real>>imag;
		}
		friend void operator +(complex &c1,complex &c2);
	};
		void operator +(complex &c1,complex &c2)
		{
			cout<<c1.real+c2.real<<"+"<<c1.imag+c2.imag<<"i";
		}
int main()
{
	complex c1,c2;
	c1+c2;//operator +(c1,c2);
	return 0;
}
