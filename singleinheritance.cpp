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
int main()
{
	student st;
	st.gets();
	st.shows();
	return 0;
}
