#include <stdio.h>

int main()
{
  double x, y;

  printf("�Ǽ��� �Է��Ͻÿ� : ");
  scanf("%lf %lf", &x, &y);

  printf("%.2lf %.2lf %.2lf %.2lf\n", x + y, x - y, x * y, x / y);

  return 0;
}