#include<iostream>
using namespace std;
class DOB
{
	private:
		int dd,mm,yy;
	public:
		void get()
		{
			cout<<"enter day ";
			cin>>dd;
			cout<<"enter month";
			cin>>mm;
			cout<<"enter year ";
			cin>>yy;
		}
		void show()
		{
			cout<<"date of birth is"<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
class student
{
	private:
		string name;
		int pinno;
		DOB d;
	public:
		void display()
		{
			cout<<"enter name";
			cin>>name;
			cout<<"enter pinno";
			cin>>pinno;
			d.get();
			cout<<"name is"<<name<<endl<<"pinno is"<<pinno<<endl;
			d.show();
		}
};
int main()
{
	student s;
	s.display();
	return 0;
}
