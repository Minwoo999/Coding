/**********************
���α׷��� : �Խ��� ���α׷��� ������ �� ���ϱ�
���α׷� ���� : �׸���� �������� �Է¹޾� �ʿ��� ������ ���� ������ �������� �׸� ���� ���
������ : ��ο� (201810198)
**********************/

// ex.04_13

#include <stdio.h>

int main()
{
  int items = 0; // ��ü �׸� ��
  int pages = 0, left = 0;
  int items_per_page = 0; // �� ������ �� �׸� ��

  printf("�׸��? ");
  scanf("%d", &items);

  printf("�� ������ �� �׸� ��? ");
  scanf("%d", &items_per_page);

  pages = items / items_per_page; // ������ ��
  left = items % items_per_page;  // ���� �׸� ��

  printf("�ʿ��� �� ������ �� : %d\n", pages);
  printf("������ �������� �׸� �� : %d\n",
         left > 0 ? left : items_per_page);

  return 0;
}
