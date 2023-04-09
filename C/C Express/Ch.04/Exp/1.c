// 실수 지수 표현

#include <stdio.h>

int main()
{
  double x;
  printf("실수를 입력 하시오 : ");
  scanf("%lf", &x);

  printf("실수형식으로는 %lf 입니다.", x);
  printf("지수형식으로는 %e 입니다.", x);

  return 0;
}