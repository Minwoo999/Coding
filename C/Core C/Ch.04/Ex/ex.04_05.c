/**********************
프로그램명 : 증감 연산자의 사용 예
프로그램 내용 : 증감연산자 사용해보기
개발자 : 김민우 (201810198)
**********************/

// ex.04_05

#include <stdio.h>

int main()
{
  int index1 = 0, index2 = 0;
  int current1, current2;
  float x1 = 0.5F, x2 = 0.5F;
  float y1, y2;

  current1 = index1++;
  printf("index1 = %d, current1 = %d\n", index1, current1);

  current2 = ++index2;
  printf("index2 = %d, current2 = %d\n", index2, current2);

  y1 = x1++;
  printf("x1 = %.2f, y1 = %.2f\n", x1, y1);

  y2 = ++x2;
  printf("x2 = %.2f, y2 = %.2f\n", x2, y2);

  return 0;
}