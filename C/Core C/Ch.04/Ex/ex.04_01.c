/**********************
프로그램명 : 정수의 산술 연산
프로그램 내용 : 두개의 정수를 입력, 다양한 산술 연산을 출력
개발자 : 김민우 (201810198)
**********************/

// ex.04_01

#include <stdio.h>

int main()
{
  int x = 0, y = 0;

  printf("두 개의 정수를 입력하세요 : ");
  scanf("%d %d", &x, &y);

  printf("+%d = %d\n", x, +x);
  printf("-%d = %d\n", y, -y);
  printf("%d + %d = %d\n", x, y, x + y);
  printf("%d - %d = %d\n", x, y, x - y);
  printf("%d * %d = %d\n", x, y, x * y);
  printf("%d / %d = %d\n", x, y, x / y);
  printf("%d %% %d = %d\n", x, y, x % y);

  return 0;
}