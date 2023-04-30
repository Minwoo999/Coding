#include <stdio.h>

int main() {
  int h, m, s;

  printf("재생시간(초)? ");
  scanf("%d", &s);

  h = s / 3600;
  m = s % 3600 / 60;
  s %= 60;

  printf("재생시간은 %d시간 %d분 %d초입니다.\n", h, m, s);

  return 0;
}