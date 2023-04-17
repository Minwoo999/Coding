#include <stdio.h>

int main()
{
  int num;

  printf("자연수를 입력하시오. : ");
  scanf("%d", &num);

  printf("짝수면 1, 홀수면 0 출력 : %d\n", (num % 2 == 0) ? 1 : 0);
  return 0;
}