//1.develop c++ program to illustrate object as a class member
//2.develop c++ program to illustrate pointer to a class
#include <iostream>
using namespace std;
class Rectangle
{
	private:
 		int length;
 		int breadth;
 	public:
 		void get()
 		{
 			cout<<"enter length ,breath";
 			cin>>length>>breadth;
		}
 		void Area()
 		{
 			cout<<"area is"<<length*breadth;
		}
};

int main()
{
  Rectangle r,*rptr; 
  rptr = &r;
  rptr->get();
  rptr->Area();
  return 0;
}
