#include <stdio.h>

int main()
{
  int x, y, z, sum;
  printf("3���� ������ �Է��ϼ��� (x, y, z) : ");
  scanf("%d %d %d", &x, &y, &z);

  sum = 0;

  sum += x;
  sum += y;
  sum += z;

  printf("3�� ������ ���� %d \n", sum);
}