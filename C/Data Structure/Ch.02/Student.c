/**********************
프로그램명 : 학생 성적 분석 프로그램
프로그램 내용 : 가장 높은 점수를 받은 학생의 정보 출력
실습일 : 2023.03.16
개발자 : 김민우 (201810198)
**********************/



#include <stdio.h>
#include <string.h>
struct student {
	int id;
	char name[20];
	double score;
};
typedef struct student Student;
/**********************
프로그램명 :
프로그램 내용 :
실습일 : 2023.03.16
개발자 : 김민우 (201810198)
**********************/




#include<stdio.h>
#include<string.h>

int main()
{
	char s1[60] = "Clanguage is";
	char s2[60] = "a good programming language.";
	char s3[60];
	char s4[4][50];
	int length, i;

	length = strlen(s1);
	printf("String length is %d\n", length); // String length is 14

	strcpy_s(s3, sizeof(s3), s1);
	printf("s3 = %s \n", s3); //s3 = C language is

	if (strcmp(s1, s3) == 0) //string compare
		printf("s1 is equal to s3 \n"); // s1 is equal to s3
	else
		printf("s1 is not equal to s3 \n");

	if (strcmp(s1, s2) == 0)
		printf("s1 is equal to s2 \n");
	else
		printf("s1 is no equal to s2 \n"); // s1 is not equal to s2
	strcat_s(s1, sizeof(s1), s2); //string concatenation
	printf("s1 = %s \n", s1); // s1 = C language is a good progoramming language

	for (i = 0; i < 4; i++) {
		printf("Please enter a name");
		scanf_s("%s", s4[i], sizeof(s4[i]));
	}
	for (i = 0; i < 4; i++) {
		printf("\nName is %s", s4[i]);
	}

	return 0;
}

