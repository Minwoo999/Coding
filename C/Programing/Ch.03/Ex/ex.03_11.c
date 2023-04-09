/**********************
프로그램명 : 매크로 상수
프로그램 내용 : 매크로 상수 사용
개발자 : 김민우 (201810198)
**********************/

// ex.03_11

#include <stdio.h>
#define PI 3.14 // 매크로 상수 정의

int main()
{
  double radius = 0;
  double area = 0;

  printf("반지름? ");
  scanf("%lf", &radius); // double형 입력

  area = PI * radius * radius;
  printf("원의 면적 : %.2f\n", area);
  printf("PI = %.2f\n", PI);

  return 0;
}
