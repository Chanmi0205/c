#include <stdio.h>
int main(void) {
	
	int a, *pa;
	
	pa = &a;
	*pa = 10;

	printf ("포인터로 a값 출력 : %d\n", *pa);
	printf ("변수명으로 a값 출력 : %d", a);

	return 0;
} 