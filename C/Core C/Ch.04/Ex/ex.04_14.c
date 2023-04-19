/**********************
프로그램명 : 암시적인 형 변환
프로그램 내용 : 형 변환 확인
개발자 : 김민우 (201810198)
**********************/

// ex.04_14

#include <stdio.h>

int main()
{
  short a, b, c;

  printf("정수 2개? ");
  scanf("%hd %hd", &a, &b); // short형 변수 입력시 %hd 사용

  printf("%d * %d = %d\n", a, b, a * b);         // a * b 는 int * int로 처리
  printf("sizeof(a * b) = %d\n", sizeof(a * b)); // 4

  c = a * b; // int형인 (a * b)를 short형으로 변환해서 대입
  printf("c = %d\n", c);
  printf("sizeof(c) = %d\n", sizeof(c)); // 2

  return 0;
}
