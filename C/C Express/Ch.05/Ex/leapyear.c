// 윤년 프로그램

#include<stdio.h>

int main()
{
int year, result;

printf("연도를 입력하시오. ");
scanf("%d", &year);

result = (year % 4 == 0) && (year % 100 != 0 ) || (year % 400 == 0);

printf("윤년여부 = %d", result);

return 0;
}