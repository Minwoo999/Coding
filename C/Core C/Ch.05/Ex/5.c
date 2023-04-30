#include <stdio.h>

int main() {
  int year, month, day;
  printf("년도와 월을 입력 >> ");
  scanf("%d %d", &year, &month);

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
    case 2:
      if ((year % 4 == 0 && year != 100) || year % 400 == 0)
        day = 29;
      else
        day = 28;
      break;
  }
  printf("%d년 %d월은 %d일까지 있습니다.", year, month, day);
  return 0;
}