/**********************
���α׷��� : ��ȣ �ִ� ������ ��ȣ ���� ����
���α׷� ���� : singed, unsigned ���
������ : ��ο� (201810198)
**********************/

// ex.03_03

#include <stdio.h>

int main()
{
  signed short a = -10;
  unsigned short b = 65526;

  printf("a = %d, %08x\n", a, a);
  printf("b = %u, %08x\n", b, b);

  return 0;
}
