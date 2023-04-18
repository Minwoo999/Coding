/**********************
프로그램명 : 실수의 산술 연산
프로그램 내용 : 두개의 실수를 입력, 다양한 산술 연산을 출력
개발자 : 김민우 (201810198)
**********************/

// ex.04_02

#include <stdio.h>

int main()
{
  double x = 0, y = 0;

  printf("두 개의 실수를 입력하세요 : ");
  scanf("%lf %lf", &x, &y);

  printf("+%f = %f\n", x, +x);
  printf("-%f = %f\n", y, -y);
  printf("%f + %f = %f\n", x, y, x + y);
  printf("%f - %f = %f\n", x, y, x - y);
  printf("%f * %f = %f\n", x, y, x * y);
  printf("%f / %f = %f\n", x, y, x / y);
  // printf("%f %% %f = %f\n", x, y, x / y); // 컴파일 에러

  return 0;
}