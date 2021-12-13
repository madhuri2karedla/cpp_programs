#include<iostream>
using namespace std;
class frend
{
	private:
		int x,y;
	public:
		void get()
		{
			cout<<"enter x,y values:";
			cin>>x>>y;
			
		}
		friend void sum();
};
void sum()
{
	frend f;
	f.get();
	cout<<"sum of "<<f.x<<"and"<<f.y<<"is "<<f.x+f.y;
}
int main()
{
	sum();
	return 0;
}
