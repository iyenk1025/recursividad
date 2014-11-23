#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;
long fibonacci(long n)
{
	if (( n == 0 )|( n == 1 ))
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	
}
int main()
{
	long num,resultado ; 
	
	cout<<"ingrese un numero entero:"<<endl;
	cin>>num ;
	resultado=fibonacci(num);
	cout<<"el valor de Fibonacci ("<<num<<")="<<resultado<<endl;
	getch ();
	return 0;
	
}
