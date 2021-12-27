#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,age[100];
	double amt[100],sum=0,sum2=0;
	cout<<"\n\t----------------------------------------------------------------------------------------------------------\n";
	cout<<"\t        T I C K E T    B OO K I N G    S Y S T E M  F R O M  H Y D E R A B A D  T O  C H E N N A I\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\nHow many Members in your family?\n";
	cin>>a;
	cout<<"Enter the Age of Your "<<a<<" Family Members:\n";
	for(i=0;i<a;i++)
	{
		cin>>age[i];
	}
	cout<<"\n=====================================\n";
	cout<<"\nThe rates for 	flight tickets for each person.\n";
	for(i=0;i<a;i++)
	{
		if(age[i]>=10 && age[i]<20)
		{
			cout<<"\n\n10-20(age) wins 20% discount.";
			amt[i]=200-(200*20/100);
			cout<<"\nticket rate for "<<age[i]<<" years member is: Rs "<<amt[i];
		}
		else if(age[i]>=20 && age[i]<=40)
		{
			cout<<"\n\n20-40(age) wins 10% discount.";
			amt[i]=200-(200*10/100);
			cout<<"\nticket rate for "<<age[i]<<" years member is: Rs "<<amt[i];
		}
		else if(age[i]>40)
		{
			cout<<"\n\nAbove 20 wins 5% discount";
			amt[i]=200-(200*5/100);
			cout<<"\nticket rate for "<<age[i]<<" years member is: Rs "<<amt[i];
		}
		else
		{
			cout<<"\n\n"<<age[i]<<" years are allowed to sit freely because Below 10 Children ticket cost is free\n";
			amt[i]=0;
		}
		sum+=amt[i];
	}
	cout<<"\n\n----------------------------------------------------\n";
	cout<<"\nTotal Price of Tickets is: "<<sum;
	return 0;
}

