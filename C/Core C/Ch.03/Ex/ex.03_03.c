/**********************
프로그램명 : 부호 있는 정수와 부호 없는 정수
프로그램 내용 : singed, unsigned 출력
개발자 : 김민우 (201810198)
**********************/

// ex.03_03

#include <stdio.h>

int main()
{
  signed short a = -10;
  unsigned short b = 65526;

  printf("a = %d, %08x\n", a, a);
  printf("b = %u, %08x\n", b, b);

  return 0;
}
