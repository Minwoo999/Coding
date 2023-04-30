#include <stdio.h>
#define PI 3.141592

int main() {
  double r, h, v;

  printf("반지름의 길이? ");
  scanf("%lf", &r);

  printf("높이? ");
  scanf("%lf", &h);

  v = PI * r * r * h;

  printf("원기둥의 부피 : %lf\n", v);

  return 0;
}