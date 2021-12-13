#include <iostream>
using namespace std;
  
class base
{
public:
	virtual void print()
	{
		cout<<"print() of base class"<<endl;
	}
};
class derived1:public base
{
	public:
		void print()
		{
			cout<<"print() of derived1 class"<<endl;
		}
};
   
class derived2:public derived1
{
	public:
		void print()
		{
			cout<<"print() of derived2 class"<<endl;
		}
};
int main() 
{
    base b,*bptr;
    derived1 d1;
    derived2 d2;
    bptr=&b;
    bptr->print();
    bptr = &d1;
    bptr->print();  
  	bptr = &d2;
    bptr->print();  
  
    return 0;
} 
