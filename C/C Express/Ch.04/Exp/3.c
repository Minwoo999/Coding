// x�� y�� ��ȯ

#include <stdio.h>

int main()
{
  int x, y, tmp;

  scanf("%d %d", &x, &y);
  printf("x = %d y= %d\n", x, y);

  tmp = x;
  x = y;
  y = tmp;

  printf("x = %d y = %d", x, y);

  return 0;
}