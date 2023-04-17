#include <stdio.h>

int main()
{
  double c, f;

  printf("화씨 온도를 입력하시오. : ");
  scanf("%lf", &f);

  c = ((double)5 / 9) * (f - 32.0);

  printf("섭씨 온도는 %lf 입니다. ", c);

  return 0;
}