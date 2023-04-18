#include <stdio.h>

int main()
{
  double kane, shadow, distance, height;

  printf("지팡이의 높이를 입력하시오. : ");
  scanf("%lf",&kane);

  printf("지팡이의 그림자의 길이를 입력하시오. : ");
  scanf("%lf", &shadow);

  printf("피라미드까지의 거리를 입력하시오. : ");
  scanf("%lf", &distance);

  height = kane*distance / shadow;

  printf("피라미드의 높이는 %.2lf입니다.", height);

  return 0;
}