/**********************
���α׷��� : ��ũ�� ���
���α׷� ���� : ��ũ�� ��� ���
������ : ��ο� (201810198)
**********************/

// ex.03_11

#include <stdio.h>
#define PI 3.14 // ��ũ�� ��� ����

int main()
{
  double radius = 0;
  double area = 0;

  printf("������? ");
  scanf("%lf", &radius); // double�� �Է�

  area = PI * radius * radius;
  printf("���� ���� : %.2f\n", area);
  printf("PI = %.2f\n", PI);

  return 0;
}
