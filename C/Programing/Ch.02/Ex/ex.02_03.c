/**********************
프로그램명 : 문자폭 지정하기
프로그램 내용 : 문자폭을 지정하여 출력
개발자 : 김민우 (201810198)
**********************/


//ex.02_03


#include <stdio.h>

int main(void)
{
	int num = 12345;

	printf("%d\n", num);
	printf("%d\n", num * 10);
	printf("%d\n", num * 100);
	printf("%d\n", num * 1000);

	printf("%8d\n", num);      // 8문자 폭에 맞춰서 출력
	printf("%8d\n", num * 10);
	printf("%8d\n", num * 100);
	printf("%8d\n", num * 1000);
	printf("%8d\n", num * 10000); // 문자폭보다 큰 수 출력

	printf("%08d\n", num);       // 빈칸 대신 문자 폭의 남는 부분에 0 출력


	return 0;

}