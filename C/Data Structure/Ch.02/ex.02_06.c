/**********************
프로그램명 : 다항식의 합을 구하는 함수
프로그램 내용 : 다항식의 합을 구하여 출력
실습일 : 2023.03.16
개발자 : 김민우 (201810198)
**********************/


//ex.02_06


#include <stdio.h>

Polynomial add_poly( Polynomial a, Polynomial b)
{
	int i;
	Poly nomial p;
	if (a.degree > b.degree) {
		p = a;
		for (i = 0; i <= b.degree; i++)
			p.coef[i + (p.degree - b.degree)] += b.coef[i];
	}
	else {
		p = b;
		for (i = 0; i <= a.degree; i++)
			p.coef[i + (p.degree - a.degree)] += a.coef[i];
	}


	return p;
}
