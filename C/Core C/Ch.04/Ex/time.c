/**********************
프로그램명 : 시간 계산
프로그램 내용 : 초를 입력 받아 시, 분, 초 로 출력
실습일 : 2023.04.07
개발자 : 김민우 (201810198)
**********************/

// time

#include <stdio.h>

int main() {
  int sec, hour, min;

  printf("초를 입력 >> ");
  scanf("%d", &sec);

  hour = sec / 3600;
  min = sec % 3600 / 60;
  sec %= 60;

  printf("%d시간 %d분 %d초 ", hour, min, sec);

  return 0;
}
