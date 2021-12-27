#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter x value either 1,0,-1";
	cin>>x;
try 
	{
    	if (x == 0)
            throw x;
        else if(x==-1)
        	throw 'x';
        else if(x==1)
            throw (float)x;
        else
        	cout<<"entered invalid input ";
    } 
catch (int x) 
	{
        cout << "Catch a integer and that integer is:" << x;
    } 
catch (char x) 
	{
        cout << "Catch a character and that character is:" << x;
    }
catch (float x) 
	{
        cout << "Catch a float and that float value is:" << x;
    }
}
