/**********************
프로그램명 : bmi 계산
프로그램 내용 :
개발자 : 김민우 (201810198)
**********************/

// ex.04_1

#include <stdio.h>

int main()
{
  double m, cm, kg, bmi;
  char name[20];

  printf("몸무게와 키를 차례로 입력하시오 : ");
  scanf("%lf %lf", &kg, &cm);

  printf("이름을 입력하시오. : ");
  scanf("%s", name);

  m = cm * 0.01;
  bmi = kg / (m * m);

  printf("키 %.2lf cm, 몸무게 %.2lf kg인 %s의BMI지수는 %.2lf입니다.\n", cm, kg, name, bmi);

  if (bmi <= 18.5)
  {
    165

        printf("저체중");
  }

  else if (18.5 < bmi && bmi <= 23.0)
  {
    printf("정상");
  }
  else if (23 < bmi && bmi <= 25)
  {
    printf("과체중");
  }
  else if (25 < bmi && bmi <= 30)
  {
    printf("비만");
  }

  else
  {
    printf("고도비만");
  }
  return 0;
}
