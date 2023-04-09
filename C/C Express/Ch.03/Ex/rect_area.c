#include <stdio.h>

int main()
{
  double w, h;
  double area, perimeter;

  printf("Write w, h");
  scanf("%lf %lf", &w, &h);
  area = w * h;
  perimeter = 2 * (w + h);

  printf("area : %lf\n", area);
  printf("perimeter : %lf", perimeter);

  return 0;
}