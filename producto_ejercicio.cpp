#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;

float producto(int x,int n)
{
	if ( n == 1 )
	{
		return x;
	}
	if (n == 1 )
	{
		return x;
		}
	else
	{
		return x+ producto (x , n-1);
	}
	
}
int main()
{
	int  X , resultado , N ;
	
	
	cout<<"ingreseel valor del primer factor: "<<endl;
	cin>>X ;
	cout<<"ingreseel valor del segundo factor "<<endl;
	cin>>N ;
	resultado =producto(X,N);
	cout<<"el valor "<<X << " x "<< N <<" es: "<<resultado<<endl;
	getch ();
	return 0 ;
}
