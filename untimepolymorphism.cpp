#include <bits/stdc++.h>
using namespace std;
  
class base
{
public:
	virtual void print()
	{
		cout<<"print() of base class"<<endl;
	}
};
class derived:public base
{
	void print()
	{
		cout<<"print() of derived class"<<endl;
	}
};
   

int main() 
{
    base b,*bptr;
    derived d,*dptr;
    bptr=&b;
    dptr=&d;
    bptr->print(); 
    dptr->print(); 
    bptr = &d;
    bptr->print();  
  
    return 0;
} 
