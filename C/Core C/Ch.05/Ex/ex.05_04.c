/**********************
���α׷��� : ��ø�� if�� ��� ��
���α׷� ���� :
������ : ��ο� (201810198)
**********************/

// ex.05_04

#include <stdio.h>

int main()
{
  int age, fee, month;

  printf("����? ");
  scanf("%d", &age);

  if (age >= 8)

    if (age >= 65) // if�� �ȿ� �ٸ� if���� ������ �� �ִ�.
      fee = 5000;
    else
      fee = 10000;
  else
    fee = 0;

  if (age >= 8 && month >= 6 && 8 >= month)
    fee += 5000;

  printf("����� : %d\n", fee);

  return 0;
}
