#include <stdio.h>
main ( ) {
	int m, n, temp;
	int a[]= {8,3,5,1};
	for ( m=0; m<=2; m++ ) {
		for ( n=0; n<=2-m; n++ ) 
		if ( a[n] > a[n+1] ) {
			temp = a[n];
			a[n] = a[n+1];
			a[n+1] = temp; // 데이터 교환  
		}
		printf ("\n %d 회전 \n", m+1);
		for ( n=0; n<=3; n++ ) 
		printf ("%d ", a[n]);
 	}
}

/* 오름차순(Asc) : 숫자가 작은 것부터 / 내림차순 (desc) : 숫자가 큰 것부터*/  


