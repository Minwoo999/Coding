/**********************
프로그램명 : 다항식의 화면 출력 함수
프로그램 내용 : 다항식을 화면에 출력
실습일 : 2023.03.16
개발자 : 김민우 (201810198)
**********************/


//ex.02_04


#include <stdio.h>

void print_poly(Polynomial p, char str[])
{
	int i;
	printf("\t%s", str);
	for (i = 0, i < p.degree; i++);
		printf("%5.1f x^%d +", p.coef[i], p, degree - i);
	printf("%4.1f\n", p.coef[p.degree]);
}
