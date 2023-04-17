#include <stdio.h>

int main()
{
  int x, y;

  printf("정수 2개를 입력하시오 : ");
  scanf("%d %d", &x, &y);

  printf("%d && %d 의 결과값 : %d \n", x, y, x && y);
  printf("%d || %d 의 결과값 : %d \n", x, y, x || y);
  printf("!%d의 결과 값 : %d \n", x, !x);

  return 0;
}