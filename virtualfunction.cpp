#include <iostream>
using namespace std;
 
class base {
public:
	virtual void show()
    {
        cout << "show() base class" << endl;
    }
};
 
class derived : public base 
{
public:
    void show()
    {
        cout << "show() derived class" << endl;
    }
};
 
int main()
{
    base b,*bptr;
    derived d,*dptr;
    bptr=&b;
    dptr=&d;
    bptr->show();
    dptr->show();
    bptr = &d;
    bptr->show();
}
