#include <stdio.h>

int main()
{
  double kane, shadow, distance, height;

  printf("�������� ���̸� �Է��Ͻÿ�. : ");
  scanf("%lf",&kane);

  printf("�������� �׸����� ���̸� �Է��Ͻÿ�. : ");
  scanf("%lf", &shadow);

  printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�. : ");
  scanf("%lf", &distance);

  height = kane*distance / shadow;

  printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", height);

  return 0;
}