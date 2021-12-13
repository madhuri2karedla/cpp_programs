#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int x;
		friend class B;
		public:
			void getA()
			{
				cout<<"enter x"<<endl;
				cin>>x;
			}
			void showA()
			{
				cout<<"x value is "<<x<<endl;
			}
};
class B
{
	private:
		int y;
	public:
		void getB()
			{
				cout<<"enter y"<<endl;
				cin>>y;
			} 
		void showB()
			{
		    	cout<<"y value is "<<y<<endl;
			}
		void swap()
		{
			A a;
			a.getA();
	a.showA();
			int temp;
			temp=a.x;
			a.x=y;
			y=temp;
			
		}
};
int main()
{
	A a1;
	
	B b;
	b.getB();
	b.showB();
	b.swap();
	cout<<"after swapping:";
	a1.showA();
	b.showB();
	return 0;
}
