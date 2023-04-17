// 조건 연산자 프로그램

#include <stdio.h>

int main()
{
  int x, y, X, Y;

  printf("정수 2개? : ");
  scanf("%d %d", &x, &y);

  X = (x > y) ? x : y;
  Y = (x < y) ? x : y;

  printf("큰 수 = %d\n", X);
  printf("작은 수 = %d\n", Y);

  return 0;
}