/**********************
���α׷��� : �� ���� ��� ���ϱ�
���α׷� ���� : ���� ������ �Է� �޾� ����� ���
������ : ��ο� (201810198)
**********************/

// ex.04_15

#include <stdio.h>

int main()
{
  int a, b, c;
  double average;

  printf("���� 3��? ");
  scanf("%d %d %d", &a, &b, &c);

  average = (double)(a + b + c) / 3; // ������� �� ��ȯ �ʿ�
  printf("��� : %lf\n", average);

  return 0;
}
