#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>d;
	for(int i=1;i<=5;i++)
	{
		d.push_back(i*10);
	}
	deque<int>::iterator it;
	for(it=d.begin();it!=d.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

