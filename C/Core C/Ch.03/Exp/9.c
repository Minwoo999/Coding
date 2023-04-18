/**********************
프로그램명 : 파운드를 킬로그램으로 변환
프로그램 내용 : 파운드를 입력받아 킬로그램으로 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// 9번

#include <stdio.h>

int main()
{
  double kg;
  int lb;

  printf("무게(lb)? ");
  scanf("%d", &lb);

  kg = lb * 0.45359237;

  printf("%d lb = %lf kg", lb, kg);
  return 0;
}
