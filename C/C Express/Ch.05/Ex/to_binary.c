/* 2���� ��ȯ
   & �����ڸ� Ȱ���Ͽ� ���� ���ڸ����� ���
   255���� ��� */

#include <stdio.h>

int main()
{
  unsigned int num;
  printf("������ : ");
  scanf("%u", &num);

  unsigned int mask = 1 << 7; // mask = 10000000

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");
  mask = mask >> 1;

  ((num & mask) == 0) ? printf("0") : printf("1");

  printf("\n");

  return 0;
}