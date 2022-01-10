#include<iostream>
#include<list>
using namespace std;
int main()
{
	
	list<int>l1,l2;
	for(int i=0;i<5;i++)
	{
		l1.push_back(i);
	}
	for(int i=10;i<15;i++)
	{
		l2.push_back(i);
	}
	list<int>::iterator it1;
	cout<<"list 1:";
	for(it1=l1.begin();it1!=l1.end();++it1)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;
	list<int>::iterator it2;
	cout<<"list 2:";
	for(it2=l2.begin();it2!=l2.end();++it2)
	{
		cout<<*it2<<" ";
	}
	cout<<endl;
	l1.merge(l2);
	cout<<"list merged:";
	for(it1=l1.begin();it1!=l1.end();++it1)
	{
		cout<<*it1<<" ";
	}
}

