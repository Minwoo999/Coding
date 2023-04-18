/**********************
프로그램명 : 환율 계산
프로그램 내용 : 환율과 원화를 입력하여 달러를 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// 11번

#include <stdio.h>

int main()
{
  int won;
  double rate, dollar;

  printf("KRW?");
  scanf("%d", &won);
  printf("원/달러 환율?");
  scanf("%lf", &rate);

  dollar = won / rate;

  printf("KRW %d = USD %.2lf", won, dollar);

  return 0;
}
