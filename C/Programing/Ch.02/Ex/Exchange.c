/**********************
프로그램명 : 환전
프로그램 내용 : 베트남 동을 한국 원으로 자동 환전해주는 프로그램
실습일 : 2023. 03. 21
개발자 : 김민우 (201810198)
**********************/


//ex.02_06


#include<stdio.h>

int main(void)
{
	float won;
	float vnd;

	printf("환전할 금액을 입력 >>");
	scanf("%f", &vnd);

	won = vnd * 0.06;

	printf("%.0f동을 환전하면 %.0f원입니다.", vnd, won);

	return 0;
}