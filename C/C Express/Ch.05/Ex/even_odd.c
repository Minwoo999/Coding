// 짝수면 1 홀수면 0

#include <stdio.h>

int main()
{
  int num, result;

  printf("숫자를 입력하시오. ");
  scanf("%d", &num);

  result = (num % 2 == 0) && (num+1 % 2 !=0);

  printf("짝수 여부 = %d", result);

  return 0;
}