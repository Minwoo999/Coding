/**********************
프로그램명 : 다항식의 입력 함수
프로그램 내용 : 다항식을 키보드로 입력할 수 있는 함수
실습일 : 2023.03.16
개발자 : 김민우 (201810198)
**********************/


//ex.02_05


#include <stdio.h>

Polynomial read_poly()
{
	int i;
	Polynomial p;

	printf("다항식의 최고 차수를 입력하시오: ");
	scanf_s("%d", &p.degree);
	printf("각 항의 계수를 입력하시오 (총%d개): ", p.degree + 1);
	for (i = 0; i <= p.degree; i++)
		scanf_s("f", p.coef + i);

	return p;


}
