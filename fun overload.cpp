#include<iostream>
using namespace std;
class function
{
	public:
		void date(int date,int month,int year)
		{
			cout<<"date is "<<date<<"-"<<month<<"-"<<year<<endl;
		}
		void date(int date,string month,int year)
		{
			cout<<"date is "<<date<<"-"<<month<<"-"<<year<<endl;
		}
};
int main()
{
	function f;
	f.date(13,12,2021);
	f.date(13,"december",2021);
	return 0;
}
