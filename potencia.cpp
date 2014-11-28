#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;
float potencia(float x,int n);
float potencia(float x,int n)
{
	if ( n == 0 )
	{
		return 1;
	}
	if (n == 1 )
	{
		return x;
		}
	else
	{
		return x*potencia(x , n-1);
	}
	
}
int main()
{
	double  X , resultado;
	int N ;
	
	
	cout<<"ingreseel valor de la base: "<<endl;
	cin>>X ;
	cout<<"ingreseel valor del exponente "<<endl;
	cin>>N ;
	resultado =potencia(X,N);
	cout<<"el valor "<<X << " elevado a "<< N <<" es: "<<resultado<<endl;
	getch ();
	return 0;
	
}
