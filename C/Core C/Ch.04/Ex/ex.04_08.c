/**********************
���α׷��� : ���� �������� ��� ��
���α׷� ���� : ���� ������ ���
������ : ��ο� (201810198)
**********************/

// ex.04_08

#include <stdio.h>

int main()
{
  int a = 0, b = 0;

  printf("�ΰ��� ����? ");
  scanf("%d %d", &a, &b);

  printf("%d > %d : %d\n", a, b, a > b);
  printf("%d < %d : %d\n", a, b, a < b);
  printf("%d >= %d : %d\n", a, b, a >= b);
  printf("%d <= %d : %d\n", a, b, a <= b);
  printf("%d == %d : %d\n", a, b, a == b);
  printf("%d != %d : %d\n", a, b, a != b);

  return 0;
}