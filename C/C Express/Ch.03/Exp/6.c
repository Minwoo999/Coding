#include <stdio.h>

int main()
{
  double earth;
  double moon;

  printf("weight?");
  scanf("%lf", &earth);

  moon = 0.17 * earth;

  printf("%.2lf", moon);

  return 0;
}