/**********************
���α׷��� : ������ ��� ����
���α׷� ���� : �ΰ��� ������ �Է�, �پ��� ��� ������ ���
������ : ��ο� (201810198)
**********************/

// ex.04_01

#include <stdio.h>

int main()
{
  int x = 0, y = 0;

  printf("�� ���� ������ �Է��ϼ��� : ");
  scanf("%d %d", &x, &y);

  printf("+%d = %d\n", x, +x);
  printf("-%d = %d\n", y, -y);
  printf("%d + %d = %d\n", x, y, x + y);
  printf("%d - %d = %d\n", x, y, x - y);
  printf("%d * %d = %d\n", x, y, x * y);
  printf("%d / %d = %d\n", x, y, x / y);
  printf("%d %% %d = %d\n", x, y, x % y);

  return 0;
}