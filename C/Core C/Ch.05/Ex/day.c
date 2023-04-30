/**********************
프로그램명 : 년도와 일수를 입력받아
프로그램 내용 : switch문을 이용하여, 년도와 월을 입력받아 해당 달의 마지막일을 출력하는 프로그램
실습일 : 2023.04.26
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>

int main() {
  int year, month, day, total_day;

  printf("년도와 월을 입력 >>  ");

  scanf("%d %d", &year, &day);

    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      day = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      day = 30;
      break;
    // default
    case 2:
      if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        day = 29;
      else
        day = 28;
      break;
  }
  printf("%d년 %d월은 %d일까지 있습니다.", year, month, day);

  return 0;
}