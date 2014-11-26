#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std ;
int suma(int c){
	int b;
	if (c==1){
		return 1;
	}
	else {
	return c + suma(c-1);
	}

}
int main()
{int n;
	cin>>n;
	cout<<suma(n);
	getch ();
	return 0;
	
}
