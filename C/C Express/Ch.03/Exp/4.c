#include <stdio.h>

int main()
{
  double F;
  double C;

  printf("F?");
  scanf("%lf", &F);

  C = (F - 32) * 5 / 9;

  printf("C : %lf", C);

  return 0;
}