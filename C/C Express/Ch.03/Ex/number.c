#include <stdio.h>

int main()
{
  double a, b, c;

  printf("세개의 실수를 입력하세요.");
  scanf("%lf %lf %lf", &a, &b, &c);

  double sum = a + b + c;
  double equal = sum / 3;

  printf("sum = %.2lf\n", sum);
  printf("equal = %.2lf\n", equal);

  return 0;
}