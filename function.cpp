/* 함수(function)란 특정한 작업을 수행하도록 설계된 독립적인 플그램(코드 블록)이다
- 프로그램 내에서 동일하게 반복되는 부분을 하나의 독립된 단위 프로그램으로 만들어 사용한다.
- 작성된 함수를 필요할 때마다 호출하여 사용하면 프로그램을 구조화할 수 있다.
- 사용자 정의 함수는 사용자가 직접 정의하고 호출하여 사용하는 함수를 말한다.
 
return문 : 함수는 결과 값을 변환하는 때가 반환하지 않는 때가 있다. 
- return : 반환할 내용이 없는 경우 사용하며 함수 내의 나머지 부분에 관계없이 함수의 실행을 종료한다. 
- return 값 : 프로그램의 제어를 호출한 곳으로 되돌려주며 결과 값도 함께 되돌려 주게 된다. 

자료형 함수명(인수 리스트) {     int mul(int a, int b) {
	변수 선언;                   int k;
	실행 문장;                   k = a * b;
	return 반환값;               return k;
}                                }                                                             
                                                                                               */
#include <stdio.h>

int max (int p, int q); //함수의 원형선언 
main ( ) {
	int a, b, m;
	a = 15;
	b = 33;
	m = max(a, b);   // 함수호출  a, b를 실인수이라 함 
	printf ("%d", m);
}
int max ( int p, int q) {  // 함수정의 p, q를 가인수이라함   
	if ( p > q ) 
	return p;
	else
	return q;
}
 
