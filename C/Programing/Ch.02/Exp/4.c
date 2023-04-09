/**********************
프로그램명 : 시간 출력
프로그램 내용 : 시간을 시, 분, 초로 입력받아서 출력
실습일 : 2023. 03. 25
개발자 : 김민우 (201810198)
**********************/


// 4번


#include <stdio.h>

int main()
{
	int h;
	int m;
	int s;

	printf("시?\n");
	scanf_s("%d", &h);

	printf("분?\n");
	scanf_s("%d", &m);

	printf("초?\n");
	scanf_s("%d", &s);

	printf("입력한 시간은 %02d : %0.2d : %02d 입니다.", h, m, s);


	return 0;
}
