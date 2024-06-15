#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std ;
int a , b , c , d , e ;
int main ()
{
	cin >> a ;
	b = a / 1000000 ;
	c = (a % 1000000 ) /10000 ;
	d = ( (a % 1000000 ) % 10000 ) /100 ;
	e = a % 100 ;
	cout << " Enter a 8-digit inteder : " << a << endl ;
	cout <<  setw (2) << setfill ('0') << b << " - " ;
	cout <<  setw (2) << setfill ('0') << c << " - " ;
	cout <<  setw (2) << setfill ('0') << d << " - " ;
	cout <<  setw (2) << setfill ('0') << e ;
	return (0) ;
}
