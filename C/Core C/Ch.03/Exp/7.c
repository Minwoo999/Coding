/**********************
프로그램명 : 제곱과 세제곱 출력
프로그램 내용 : 실수값을 입력 받아 제곱과 세제곱으로 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// 7번

#include <stdio.h>

int main()
{
  double a;
  printf("실수 ? ");
  scanf("%lf", &a);

  printf("%e\n", a * a);
  printf("%e\n", a * a * a);

  return 0;
}
