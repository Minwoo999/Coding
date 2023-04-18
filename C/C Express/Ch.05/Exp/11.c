#include <stdio.h>

int main()
{
  double r, angle;
  int distance;

  printf("거리를 입력하시오 : ");
  scanf("%d", &distance);

  printf("각도를 입력하시오 : ");
  scanf("%lf", &angle);

  r = distance * 360 / angle / 2 / 3.14;

  printf("지구의 반지름은 %.2lf입니다.", r);

  return 0;
}