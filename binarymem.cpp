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
		void operator +(complex c)
		{
			cout<<real+c.real<<"+"<<imag+c.imag<<"i";
		}
};
int main()
{
	complex c1,c2;
	c1+c2;//c1.operator +(c2);
	return 0;
}
