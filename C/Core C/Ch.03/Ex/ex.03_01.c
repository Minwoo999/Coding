/**********************
프로그램명 : 데이터형의 크기 구하기
프로그램 내용 : 여러 가지 데이터형의 크기 알아보기
개발자 : 김민우 (201810198)
**********************/

// ex.03_01

#include <stdio.h>

int main()
{
  char ch;
  int num;
  double x;

  printf("char형의 바이트 크기: %d\n", sizeof(char));

  printf("short형의 바이트 크기 : %d\n", sizeof(short));
  printf("int형의 바이트 크기 : %d\n", sizeof(int));
  printf("long형의 바이트 크기 : %d\n", sizeof(long));
  printf("long long형의 바이트 크기 : %d\n", sizeof(long long));

  printf("float형의 바이트 크기 : %d\n", sizeof(float));
  printf("double형의 바이트 크기 : %d\n", sizeof(double));
  printf("long double형의 바이트 크기 : %d\n", sizeof(long double));

  printf("ch 변수의 바이트 크기 : %d\n", sizeof ch);
  printf("num 변수의 바이트 크기 : %d\n", sizeof num);
  printf("x 변수의 바이트 크기 : %d\n", sizeof x);

  return 0;
}
