#include <stdio.h>

int main()
{
  int num;

  printf("�ڿ����� �Է��Ͻÿ�. : ");
  scanf("%d", &num);

  printf("¦���� 1, Ȧ���� 0 ��� : %d\n", (num % 2 == 0) ? 1 : 0);
  return 0;
}