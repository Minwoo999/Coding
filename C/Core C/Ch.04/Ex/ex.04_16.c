/**********************
프로그램명 : 연산자의 우선순위와 결합 규칙
프로그램 내용 : 연산자의 우선순위와 결합 규칙 확인
개발자 : 김민우 (201810198)
**********************/

// ex.04_16

#include <stdio.h>

int main()
{
  int a = 10, b = 20, c = 30;
  int result;

  result = a + b * c; // a + (b * c)
  printf("result = %d\n", result);

  result = (a + b) * c; // (a + b) * c
  printf("result = %d\n", result);

  result = a < b && c < 0; // (a < b) && (c < 0)
  printf("result = %d\n", result);
}
