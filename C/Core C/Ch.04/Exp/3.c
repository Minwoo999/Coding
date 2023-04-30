#include <stdio.h>

int main() {
  double v, g, d;

  printf("질량(g)? ");
  scanf("%lf", &g);

  printf("부피(세제곱센티미터)? ");
  scanf("%lf", &v);

  d = g / v;

  printf("밀도 : %lf\n", d);

  return 0;
}