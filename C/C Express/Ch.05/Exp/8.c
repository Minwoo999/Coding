#include <stdio.h>
#define PI 3.141592

int main()
{
  double r, area, volume;

  printf("구의 반지름을 입력하시오 : ");
  scanf("%lf", &r);

  area = 4 * PI * r * r;
  volume = 4.0 / 3.0 * PI * r * r * r;

  printf("표면적은 %.2lf입니다.\n", area);
  printf("체적은 % .2lf입니다.\n", volume);

  return 0;
}