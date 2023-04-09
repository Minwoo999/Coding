/**********************
프로그램명 : 합차 계산
프로그램 내용 : 실수 두개를 입력받고 합과 차를 출력
실습일 : 2023. 03. 25
개발자 : 김민우 (201810198)
**********************/


// 8번


#include <stdio.h>

int main()
{
	float a;
	float b;
	float c;
	float d;

;
	printf("실수 2개?");
	scanf_s("%f %f", &a, &b);

	c = a + b;
	d = a - b;

	printf("%f + %f = %f\n", a, b, c);
	printf("%f + %f = %f", a, b, d);



	return 0;
}
