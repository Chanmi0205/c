#include <stdio.h>
main ( ) {
	int a, b, min, temp;
	int c[5]={5,2,8,3,1};
	for ( a=0; a<=3; a++ ) {
		min = a;
		for ( b=a+1; b<=4; b++ )
		if ( c[b] < c[min] ) min = b;
		temp = c[a];
		c[a] = c[min];
		c[min] = temp;
		printf("\n%d È¸Àü \n", a+1);
		for ( b=0; b<=4; b++ ) 
		printf ("%3d", c[b]);
	}
}
