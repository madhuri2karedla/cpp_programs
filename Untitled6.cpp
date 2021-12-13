#include<iostream>
using namespace std;
class A
{
	private:
		int a;
		public:
			void get_a(int val_a)
			{
				a=val_a;
			}
			void disp_a(void)
			{
				cout<<"value of a:"<<a<<endl;
			}
};
