#include <stdio.h>
#define PI 3.141592

int main()
{
  double r, area, volume;

  printf("���� �������� �Է��Ͻÿ� : ");
  scanf("%lf", &r);

  area = 4 * PI * r * r;
  volume = 4.0 / 3.0 * PI * r * r * r;

  printf("ǥ������ %.2lf�Դϴ�.\n", area);
  printf("ü���� % .2lf�Դϴ�.\n", volume);

  return 0;
}