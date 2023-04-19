/**********************
프로그램명 : 세 수의 평균 구하기
프로그램 내용 : 정수 세개를 입력 받아 평균을 출력
개발자 : 김민우 (201810198)
**********************/

// ex.04_15

#include <stdio.h>

int main()
{
  int a, b, c;
  double average;

  printf("정수 3개? ");
  scanf("%d %d %d", &a, &b, &c);

  average = (double)(a + b + c) / 3; // 명시적인 형 변환 필요
  printf("평균 : %lf\n", average);

  return 0;
}
