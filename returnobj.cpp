#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag;
	public:
		void get();
		void show();
		complex add(complex c2);
};
void complex::get()
{
	cout<<"enter real&imag values:";
	cin>>real>>imag;
}
void complex::show()
{
	cout<<"complex numbber is:";
	cout<<real<<"+"<<imag<<"i"<<endl;
}
complex complex::add(complex c2)
{
	complex temp;
	temp.real=real+c2.real;
	temp.imag=imag+c2.imag;
	return temp;
}
int main()
{
	complex c1,c2,c3;
	c1.get();
	c1.show();
	c2.get();
	c2.show();
	c3=c1.add(c2);
	c3.show();
	return 0;
}
