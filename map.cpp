#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
	map<int,string>m1;
	m1.insert(make_pair(2805,"james"));
	m1.insert(make_pair(2802,"smith"));
	m1.insert(make_pair(2801,"scott"));
	m1.insert(make_pair(2807,"miller"));
	m1.insert(make_pair(2804,"joy"));
	m1.insert(make_pair(2806,"john"));
	m1.insert(make_pair(2801,"sam"));
	m1.insert(make_pair(2803,"bob"));
	map<int,string>::iterator pos;
	cout<<"empid"<<"\t"<<"name"<<endl;
	for(pos=m1.begin();pos!=m1.end();++pos)
	cout<<pos->first<<"\t"<<pos->second<<endl;
	pos=m1.find(2803);
	cout<<"value at key 2803 is "<<pos->second<<endl;
	m1.erase(2805);
	cout<<"after deletion map is"<<endl;
	for(pos=m1.begin();pos!=m1.end();++pos)
	cout<<pos->first<<"\t"<<pos->second<<endl;
	return 0;
}
