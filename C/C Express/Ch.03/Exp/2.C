#include <stdio.h>

int main()
{
  double mile;
  double m;

  printf("mile?");
  scanf("%lf", &mile);

  m = 1609 * mile;

  printf("%.1lf mile is %.2lf m.", mile, m);

  return 0;
}
