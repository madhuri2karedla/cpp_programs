#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int>ivec;
	for(i=0;i<5;i++)
	{
		ivec.push_back(i);
	}
	vector<int>::iterator it;
	for(it=ivec.begin();it!=ivec.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

