/**********************
���α׷��� : ������ ���� �� ���
���α׷� ���� : ������ �����ϰ� ���
������ : ��ο� (201810198)
**********************/

// ex.03_09

#include <stdio.h>
int main()
{
  int amount;          // ���� -> �ʱ�ȭ���� ���� ���
  int price = 0;       // �ܰ� -> ������ ������ 0���� �ʱ�ȭ
  int total_price = 0; // �հ� �ݾ� -> ������ ������ 0���� �ʱ�ȭ

  printf("amount = %d, price = %d\n", amount, price);

  printf("����? ");
  scanf("%d", &amount);

  price = 2000;

  total_price = amount * price; // �հ� �ݾ�
  printf("�հ� : %d��\n", total_price);

  return 0;
}