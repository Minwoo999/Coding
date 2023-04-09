/**********************
프로그램명 : 날짜 출력
프로그램 내용 : 날짜를 연, 월, 일로 받아서 출력
실습일 : 2023. 03. 25
개발자 : 김민우 (201810198)
**********************/


// 3번


#include <stdio.h>

int main()
{
	int y;
	int m;
	int d;

	printf("연?\n");
	scanf_s("%d", &y);

	printf("월?\n");
	scanf_s("%d", &m);

	printf("일?\n");
	scanf_s("%d", &d);

	printf("입력한 날짜는 %d년 %d월 %d일 입니다.", y, m, d);



	return 0;
}
