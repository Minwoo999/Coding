/**********************
프로그램명 : 대입 연산식의 값
프로그램 내용 :
개발자 : 김민우 (201810198)
**********************/

// ex.04_0

#include <stdio.h>

int main()
{
  int a = 0;
  double b = 0;
  int c = 0;

  a = 123;
  printf("a = %d\n", a);
  printf("a = %d\n", a = 456);
  printf("b = %f\n", b = a + 0.5);
  printf("c = %d\n", c = printf("ABC\n"));

  return 0;
}