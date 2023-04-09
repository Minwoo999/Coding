/**********************
프로그램명 : 서식 지정자 사용하기
프로그램 내용 : 이름 나이 성별을 입력 후 출력
실습일 : 2023. 03. 21
개발자 : 김민우 (201810198)
**********************/


//ex.02_06


#include<stdio.h>

int main()
{
	char name[20];
	int age;
	char gender;

	printf("이름, 나이, 성별(M/F) 순으로 입력하세요.\n");
	scanf_s("%s %d %c", name, 20, &age, &gender, 1); // 3개의 변수 입력

	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("성별 : %c\n", gender);

	return 0;
}