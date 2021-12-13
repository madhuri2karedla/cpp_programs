#include<iostream>
using namespace std;
class num
{
int a,b;
public:
num()
{
a=10,b=20;

}
num(int x,int y)
{
a=x;
b=y;

}

void add()
{
cout<<"sum of "<<a<<"and"<<b<<"is"<<a+b<<endl;
}
};
int main()
{
num n;
num X(15,15);
n.add();
X.add();
return 0;

}


