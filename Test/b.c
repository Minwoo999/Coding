#include <stdio.h>

int main()
{
  unsigned int num;

  unsigned int mask = 1 << 7;

  scanf("%u", num);

  (num & mask == 0) ? printf("0") : printf("1");
}