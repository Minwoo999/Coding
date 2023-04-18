/**********************
프로그램명 : 인치를 센티미터로 변환
프로그램 내용 : 인치를 입력받아 센티미터로 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// 5번

#include <stdio.h>

int main()
{
  double inch, cm;

  printf("길이(inch)? ");
  scanf("%lf", &inch);

  cm = inch * 2.54;

  printf("%lf inch = %lf cm", inch, cm);

  return 0;
}
