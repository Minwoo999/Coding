/**********************
프로그램명 : 논리 연산자의 사용 예
프로그램 내용 : 논리 연산자 사용
개발자 : 김민우 (201810198)
**********************/

// ex.04_09

#include <stdio.h>

int main()
{
  int month;

  printf("몇 월? ");
  scanf("%d", &month);

  if (month >= 6 && month <= 8) // 논리 AND
    printf("성수기 요금 적용\n");

  if (month < 6 || month > 8) // 논리 OR
    printf("일반 요금 적용]\n");

  // if (!(month >= 6 && month <= 8)) // 논리 NOT
  //   printf("일반 요금 적용\n");

  return 0;
}