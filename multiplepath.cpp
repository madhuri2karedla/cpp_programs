#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
		char gender;
	void getp()
	{
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the age:";
		cin>>age;
		cout<<"enter the gender:";
		cin>>gender;
	}
	void showp()
	{
		cout<<"name"<<name<<endl;
		cout<<"age"<<age<<endl;
		cout<<"gender"<<gender<<endl;
	}
};
class student:public person
{
	protected:
		int id;
		string branch;
	public:
	void gets()
	{
		getp();
		cout<<"enter the id :";
		cin>>id;
		cout<<"enter the  branch:";
		cin>>branch;
	}
	void shows()
	{
		showp();
		cout<<"id is"<<id<<endl;
		cout<<"branch"<<branch<<endl;
	}
};
class employee:public person
{
	protected:
		int eid;
		float salary;
	public:
	void gete()
	{
		getp();
		cout<<"enter the id :";
		cin>>eid;
		cout<<"enter the  salary:";
		cin>>salary;
	}
	void showe()
	{
		showp();
		cout<<"employee id is"<<eid<<endl;
		cout<<"salary"<<salary<<endl;
	}
};
class internship:public student,public employee
{
	
	public:
	void result()
	{
	gets();
	shows();
	gete();
	showe();
	cout<<"diamond";	
	}
};
int main()
{
	internship i;
	i.result();
	return 0;
}
