#include <stdio.h>

int main() {
  double kg, s, J;

  printf("질량(kg)? ");
  scanf("%lf", &kg);

  printf("속력(m/s)? ");
  scanf("%lf", &s);

  J = kg * s * s * 1 / 2;

  printf("운동에너지 : %.2lfJ\n", J);

  return 0;
}