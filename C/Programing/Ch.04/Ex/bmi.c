/**********************
프로그램명 : bmi 계산
프로그램 내용 : 키와 몸무게를 입력 받아서 출력하는 프로그램
실습일 : 2023.04.07
개발자 : 김민우 (201810198)
**********************/

// bmi

#include <stdio.h>

int main()
{
  double bmi, h_cm, height, weight;

  printf("키(cm), 몸무게 입력 >> ");
  scanf("%lf %lf", &h_cm, &weight);
  height = h_cm / 100;
  bmi = weight / (height * height);

  printf("BMI는 %lf 입니다.", bmi);

  return 0;
}