/**********************
���α׷��� : ȯ�� ���
���α׷� ���� : ȯ���� ��ȭ�� �Է��Ͽ� �޷��� ���
�ǽ��� : 2023.04.18
������ : ��ο� (201810198)
**********************/

// 11��

#include <stdio.h>

int main()
{
  int won;
  double rate, dollar;

  printf("KRW?");
  scanf("%d", &won);
  printf("��/�޷� ȯ��?");
  scanf("%lf", &rate);

  dollar = won / rate;

  printf("KRW %d = USD %.2lf", won, dollar);

  return 0;
}
