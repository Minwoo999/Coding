/**********************
���α׷��� : �Ͻ����� �� ��ȯ
���α׷� ���� : �� ��ȯ Ȯ��
������ : ��ο� (201810198)
**********************/

// ex.04_14

#include <stdio.h>

int main()
{
  short a, b, c;

  printf("���� 2��? ");
  scanf("%hd %hd", &a, &b); // short�� ���� �Է½� %hd ���

  printf("%d * %d = %d\n", a, b, a * b);         // a * b �� int * int�� ó��
  printf("sizeof(a * b) = %d\n", sizeof(a * b)); // 4

  c = a * b; // int���� (a * b)�� short������ ��ȯ�ؼ� ����
  printf("c = %d\n", c);
  printf("sizeof(c) = %d\n", sizeof(c)); // 2

  return 0;
}
