#include <stdio.h>

int main()
{
  int i = 255;
  printf("%d %#o %#x \n", i, i, i);

  printf("-1 -2 -3 �� �ϳ� �Է�");
  scanf("%d", &i);
  printf("%d %#o %#x", i, i, i);

  return 0;
}