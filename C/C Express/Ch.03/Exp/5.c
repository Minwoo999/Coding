#include <stdio.h>

int main()
{

  double x;

  printf("x?");
  scanf("%lf", &x);

  double a = x * x * 3 + 7 * x + 11;
  printf("%.2lf", a);

  return 0;
}