/**********************
프로그램명 : char형과 unsigned char형의 오버플로우, 언더플로우
프로그램 내용 : 유효 범위를 벗어나는 값을 저장 후 출력
개발자 : 김민우 201810198)
**********************/

// ex.03_04

#include <stdio.h>

int main()
{
  char n = 128;          // n에 유효 범위를 벗어나는 값을 저장한다.
  unsigned char m = 256; // m에 유효 범위를 벗어나는 값을 저장한다.
  char x = -129;         // x에 유효 범위를 벗어나는 값을 저장한다.
  unsigned char y = -1;  // y에 유효 범위를 값을 저장한다.

  printf("n = %d\n", n);
  printf("m = %d\n", m);
  printf("x = %d\n", x);
  printf("y = %d\n", y);

  return 0;
}
