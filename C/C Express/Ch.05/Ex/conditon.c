// ���� ������ ���α׷�

#include <stdio.h>

int main()
{
  int x, y, X, Y;

  printf("���� 2��? : ");
  scanf("%d %d", &x, &y);

  X = (x > y) ? x : y;
  Y = (x < y) ? x : y;

  printf("ū �� = %d\n", X);
  printf("���� �� = %d\n", Y);

  return 0;
}