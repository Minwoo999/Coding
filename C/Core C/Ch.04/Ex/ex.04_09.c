/**********************
���α׷��� : �� �������� ��� ��
���α׷� ���� : �� ������ ���
������ : ��ο� (201810198)
**********************/

// ex.04_09

#include <stdio.h>

int main()
{
  int month;

  printf("�� ��? ");
  scanf("%d", &month);

  if (month >= 6 && month <= 8) // �� AND
    printf("������ ��� ����\n");

  if (month < 6 || month > 8) // �� OR
    printf("�Ϲ� ��� ����]\n");

  // if (!(month >= 6 && month <= 8)) // �� NOT
  //   printf("�Ϲ� ��� ����\n");

  return 0;
}