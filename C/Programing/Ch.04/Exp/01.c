/**********************
���α׷��� : ���簢���� ���̿� �ѷ� ���
���α׷� ���� : �� ���� ���̸� �Է� �޾� ���簢���� ���̿� �ѷ��� ���
�ǽ��� :
������ : ��ο� (201810198)
**********************/

// 1��

#include <stdio.h>

int main()
{
  int length;
  int perimeter;
  int area;

  printf("�� ���� ����? ");
  scanf("%d", &length);

  perimeter = length * 4;
  area = length * length;

  printf("���簢���� ���� : %d\n", area);
  printf("���簢���� �ѷ� : %d", perimeter);

  return 0;
}
