/**********************
프로그램명 : 시간 계산
프로그램 내용 : 초를 입력 받아 시, 분, 초 로 출력
실습일 : 2023.04.07
개발자 : 김민우 (201810198)
**********************/

// time

#include <stdio.h>

int main()
{
  int i_sec, hour, min, sec;

  printf("초를 입력 >> ");
  scanf("%d", &i_sec);
  hour = i_sec / 3600;
  i_sec = i_sec - hour * 3600;
  min = i_sec / 60;
  i_sec = i_sec - min * 60;
  sec = i_sec;

  printf("입력받은 초는 %d시간 %d분 %d초 입니다.\n", hour, min, sec);

  return 0;
}