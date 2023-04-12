/**********************
프로그램명 : 몸무게 출력
프로그램 내용 : 몸무게를 입력 받은 후 출력
실습일 : 2023. 03. 25
개발자 : 김민우 (201810198)
**********************/


// 5번


#include <stdio.h>

int main()
{
	float weight;

	printf("몸무게?\n");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2fkg 입니다.", weight);


	return 0;
}
