/* 2진수 변환
   & 연산자를 활용하여 가장 앞자리수만 출력
   255까지 출력 */

#include <stdio.h>

int main()
{
  unsigned int num;
  printf("십진수 : ");
  scanf("%u", &num);

  unsigned int mask = 1 << 7; // mask = 10000000

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");

  printf("\n");

  return 0;
}