#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>deq;
	for(int i=1;i<=5;i++)
	{
		deq.push_front(i);
		deq.push_back(i*5);
	}
	deque<int>::iterator d;
	for(d=deq.begin();d!=deq.end();++d)
	{
		cout<<*d<<" ";
	}
	cout<<endl;
	d=deq.begin();
	d++;
	deq.insert(d,1,34);
	for(d=deq.begin();d!=deq.end();++d)
	{
		cout<<*d<<" ";
	}
	cout<<endl;
	deq.pop_back();
	deq.pop_front();
	for(d=deq.begin();d!=deq.end();++d)
	{
		cout<<*d<<" ";
	}
}

