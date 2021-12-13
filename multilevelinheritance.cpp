#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int age;
		int id;
	void gets()
	{
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the age:";
		cin>>age;
		cout<<"enter the id:";
		cin>>id;
	}
};
class marks:public student
{
	protected:
		int m1,m2,m3,m4,m5,m6;
		string branch;
	public:
	void getm()
	{
		gets();
		cout<<"enter the marks :";
		cin>>m1>>m2>>m3>>m4>>m5>>m6;
		cout<<"enter the  branch:";
		cin>>branch;
	}
	void showm()
	{
		cout<<"name"<<name<<endl;
		cout<<"age"<<age<<endl;
		cout<<"id"<<id<<endl;
		cout<<"marks are"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<"\t"<<m6<<"\t"<<endl;
		cout<<"branch"<<branch<<endl;
	}
};
class percentage:public marks
{
	public:
		float per;
	void result()
	{
	getm();
	per=(float)(m1+m2+m3+m4+m5+m6)/6;	
	showm();
	cout<<"percentage is"<<per<<endl;
	}
};
int main()
{
	percentage p;
	p.result();
	return 0;
}
