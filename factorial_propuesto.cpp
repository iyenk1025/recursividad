#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;
int factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
	
}
int main()
{
	int n=-1, d ; 
	while(n < 0)
	{
		cout<<"ingrese un numero para calcular el factorial:"<<endl;
		cin>>n;
	}
	cout<<factorial(n);
	getch ();
	return 0;
	
}
