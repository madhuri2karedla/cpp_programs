#include<iostream>
using namespace std;
class num
{
public:
num()
{
cout<<"constructor"<<endl;

}
~num()
{
cout<<"destructor"<<endl;
}

};
int main()
{
num x;
num y;
}
