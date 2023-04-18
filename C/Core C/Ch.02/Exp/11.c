/**********************
프로그램명 : 파이값 출력
프로그램 내용 : 파이값을 다양한 방법으로 출력
실습일 : 2023. 03. 25
개발자 : 김민우 (201810198)
**********************/


// 11번


#include <stdio.h>

int main()
{
	double pi = 3.14159265;

	printf("pi =%.2lf  \n", pi);
	printf("pi =%.4lf  \n", pi);
	printf("pi =%.6lf  \n", pi);
	printf("pi =%.8lf  \n", pi);
	printf("pi =%e  \n", pi);

	return 0;
}
