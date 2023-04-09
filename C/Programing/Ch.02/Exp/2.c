/**********************
프로그램명 : 번호와 학점 출력
프로그램 내용 : 번호와 학점을 입력받아 출력
실습일 : 2023. 03. 25
개발자 : 김민우 (201810198)
**********************/


// 2번


#include <stdio.h>

int main()
{
	int num;
	float score;


	printf("번호?\n");
	scanf_s("%d", &num);

	printf("학점?\n");
	scanf_s("%f", &score);

	printf("%d번 학생의 학점은 %f입니다.", num, score);


	return 0;
}
