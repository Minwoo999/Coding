/**********************
���α׷��� : �������� �켱������ ���� ��Ģ
���α׷� ���� : �������� �켱������ ���� ��Ģ Ȯ��
������ : ��ο� (201810198)
**********************/

// ex.04_16

#include <stdio.h>

int main()
{
  int a = 10, b = 20, c = 30;
  int result;

  result = a + b * c; // a + (b * c)
  printf("result = %d\n", result);

  result = (a + b) * c; // (a + b) * c
  printf("result = %d\n", result);

  result = a < b && c < 0; // (a < b) && (c < 0)
  printf("result = %d\n", result);
}
