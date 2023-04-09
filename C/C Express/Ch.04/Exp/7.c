#include <stdio.h>

int main()
{
  double m, v, j;

  printf("질량 : ");
  scanf("%lf", &m);

  printf("속도 : ");
  scanf("%lf", &v);

  j = m * v * v / 2.0;

  printf("운동에너지 : %lf", j);

  return 0;
}