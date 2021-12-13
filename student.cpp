/*Develop a C++ program for illustrating Access Specifiers :public and
private. */
#include<iostream>
using namespace std;
class student
{
	private:
		int id;
		string name;
		float marks;
	public:
		void get()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;
			cout<<"enter marks";
			cin>>marks;
		}
		void show()
		{
			cout<<"student id is "<<id<<endl;
			cout<<"student name is "<<name<<endl;
			cout<<"student  marks is "<<marks<<endl;
		}
};
int main()
{
	student s;
	s.get();
	s.show();
	return 0;
}
