#include <stdio.h>
#include <math.h>

int main()
{
  double a, b;
  a = 1.0;
  b = 0.9;

  printf("(%lf-%lf) == 0.1 은 %d입니다.", a, b, fabs(a - b - 0.1) < 0.000001);

  return 0;
}