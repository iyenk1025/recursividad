#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std ;
void A(int c);
void B(int c);
void A(int c)
{
	if (c >= 'A')
	{
		B (c);
		cout<<"  ";
		putchar(c);
	}
}
void B(int c){
	A(--c);
}
int main()
{
	A('Z');
	getch ();
	return 0;
	
}
