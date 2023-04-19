/**********************
프로그램명 : 위치 에너지를 구하는 프로그램
프로그램 내용 : 질량과 높이를 입력 받아 위치 에너지를 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// 3번

#include <stdio.h>

int main()
{
  double kg, m;

  printf("질량(kg)?");
  scanf("%lf", &kg);
  printf("높이(m)?");
  scanf("%lf", &m);

  double J = 9.8 * kg * m;

  printf("위치에너지 : %lf J", J);

  return 0;
}
