#include <stdio.h>
#define SQMETER 3.3058

int main()
{
  double x;

  printf("평을 입력하세요 : ");
  scanf("%lf", &x);

  printf("%lf평방미터 입니다.", SQMETER * x);

  return 0;
}