/**********************
프로그램명 : 변수와 배열 복사
프로그램 내용 : 변수와 배열을 복사
실습일 : 2023.03.14
개발자 : 김민우 (201810198)
**********************/


//ex.02_01


#include <stdio.h>

void main()
{
	int A[5] = { 10, 20, 30 };
	int B[5], i, x = 2018, y = 0;

	y = x; //변수 복사
	for (i = 0; i < 5; i++) //배열 복사: 항목단위로 복사해야함.
		B[i] = A[i];

	printf ("변수 복사 결과: x=%d, y=%d\n",x, y);
	printf("배열 복사 결과: \n");
	for (i = 0; i < 5; i++) {
		printf("A[%d] = %d\t", i, A[i]);
		printf("B[%d] = %d\n", i, B[i]);
	}
	

}
