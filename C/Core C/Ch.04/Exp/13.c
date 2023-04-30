#include <math.h>
#include <stdio.h>

int main() {
  int x1, x2, y1, y2;
  double length;

  printf("직선의 시작점 (x1, y1)? ");
  scanf("%d %d", &x1, &y1);

  printf("직선의 끝점 (x2, y2)? ");
  scanf("%d %d", &x2, &y2);

  length = (double)sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

  printf("직선의 길이 : %lf\n", length);

  return 0;
}