#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int id;
	void gets()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"enterid";
		cin>>id;
	}
		
};
class marks:public student
{
	protected:
		float m1,m2,m3,m4;
	void getm()
	{
		cout<<"enter marks";
		cin>>m1>>m2>>m3>>m4;
	}
};
class project
{
	protected:
		float ip,ep;
	void getp()
	{
	cout<<"enter  project marks";
		cin>>ip>>ep;	
	}
};
class percentage:public marks,public project
{
	protected:
		float per;
	public:
		void show()
		{
			gets();
			getm();
			getp();
			cout<<"name is"<<name<<endl;
			cout<<"id is"<<id<<endl;
			cout<<"marks m1 m2 m3 m4 are      "<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<endl;
			cout<<"project marks ip,ep are "<<ip<<"\t"<<ep<<endl;
			per=(float)(m1+m2+m3+m4+ip+ep)/6;
			cout<<"percentage is"<<per;
		}
		
};
int main()
{
	percentage p;
	p.show();
	return 0;
}

