/**********************
프로그램명 : 관계 연산자의 사용 예
프로그램 내용 : 관계 연산자 사용
개발자 : 김민우 (201810198)
**********************/

// ex.04_08

#include <stdio.h>

int main()
{
  int a = 0, b = 0;

  printf("두개의 정수? ");
  scanf("%d %d", &a, &b);

  printf("%d > %d : %d\n", a, b, a > b);
  printf("%d < %d : %d\n", a, b, a < b);
  printf("%d >= %d : %d\n", a, b, a >= b);
  printf("%d <= %d : %d\n", a, b, a <= b);
  printf("%d == %d : %d\n", a, b, a == b);
  printf("%d != %d : %d\n", a, b, a != b);

  return 0;
}