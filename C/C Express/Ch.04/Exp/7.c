#include <stdio.h>

int main()
{
  double m, v, j;

  printf("���� : ");
  scanf("%lf", &m);

  printf("�ӵ� : ");
  scanf("%lf", &v);

  j = m * v * v / 2.0;

  printf("������� : %lf", j);

  return 0;
}