/**********************
프로그램명 : 비트 논리 연산자의 사용 예
프로그램 내용 : 비트 연산자 사용
개발자 : 김민우 (201810198)
**********************/

// ex.04_10

#include <stdio.h>

int main()
{
  unsigned short x = 0x12;
  unsigned short y = 0xF0;

  printf("%08x & %08x = %08x\n", x, y, x & y); // 비트 AND
}