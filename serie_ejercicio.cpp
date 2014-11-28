#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;
double factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
	
}
double serie(int  n)
{
	if ( n == 0 )
	{
		return 1;
	}
	else
	{
		
		return (1/factorial(n)) + serie(n-1);
		
	}
	
}
int main()
{
	int N; 
	double resultado; 
	
	cout<<"ingrese un numero entero:"<<endl;
	cin>>N ;
	resultado=serie(N );
	cout<<"el valor de la serie es "<<resultado<<endl;
	getch ();
	return 0;
	
}
