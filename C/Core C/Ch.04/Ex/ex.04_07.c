/**********************
���α׷��� : ���� ���� �������� Ȱ��
���α׷� ���� : ���� ������ Ȱ��
������ : ��ο� (201810198)
**********************/

// ex.04_07

#include <stdio.h>

int main()
{
  int items = 0; // ��ü �׸� ��
  int pages = 0;
  int items_per_page = 0; // �� ������ �� �׸� ��

  printf("�׸��? ");
  scanf("%d", &items);

  printf("�� ������ �� �׸��? ");
  scanf("%d", &items_per_page);

  pages = items / items_per_page; // ������ ��
  items %= items_per_page;        // ���� �׸� ��
  printf("%d �������� %d �׸� \n", pages, items);
  return 0;
}