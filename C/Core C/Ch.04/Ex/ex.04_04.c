/**********************
프로그램명 : 정수와 실수의 혼합 연산
프로그램 내용 : 정수형과 자료형을 입력받아 계산하여 출력
개발자 : 김민우 (201810198)
**********************/

// ex.04_04

#include <stdio.h>
#define PI 3.141592 // 매크로 상수 정의

int main()
{
  int radius;
  double area, perimeter;

  printf("반지름? ");
  scanf("%d", &radius);

  area = PI * radius * radius;
  printf("원의 면적 : %.2lf\n", area);

  perimeter = 2 * PI * radius;
  printf("원의 둘레 : %.2lf\n", perimeter);

  return 0;
}