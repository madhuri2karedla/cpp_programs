/*Develop a C++ program for illustrating Access Specifiers :public and
private. */
#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		string name;
		float salary;
	public:
		void get()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;
			cout<<"enter salary";
			cin>>salary;
		}
		void show()
		{
			cout<<"employee id is "<<id<<endl;
			cout<<"employee name is "<<name<<endl;
			cout<<"employee  salary is "<<salary<<endl;
		}
};
int main()
{
	employee e;
	e.get();
	e.show();
	return 0;
}
