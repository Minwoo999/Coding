#include <stdio.h>

int main()
{
  double r, angle;
  int distance;

  printf("�Ÿ��� �Է��Ͻÿ� : ");
  scanf("%d", &distance);

  printf("������ �Է��Ͻÿ� : ");
  scanf("%lf", &angle);

  r = distance * 360 / angle / 2 / 3.14;

  printf("������ �������� %.2lf�Դϴ�.", r);

  return 0;
}