/**********************
프로그램명 : 일의 양 구하는 프로그램
프로그램 내용 : 힘과 이동거리를 입력 받아 일의 양을 출력
실습일 :
개발자 : 김민우 (201810198)
**********************/

// 4번

#include <stdio.h>

int main()
{
  double N, m, J;

  printf("힘(N)?");
  scanf("%lf", &N);
  printf("이동거리(m)?");
  scanf("%lf", &m);

  J = N * m;

  printf("일의 양 : %.2lf", J);

  return 0;
}