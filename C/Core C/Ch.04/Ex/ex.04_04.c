/**********************
���α׷��� : ������ �Ǽ��� ȥ�� ����
���α׷� ���� : �������� �ڷ����� �Է¹޾� ����Ͽ� ���
������ : ��ο� (201810198)
**********************/

// ex.04_04

#include <stdio.h>
#define PI 3.141592 // ��ũ�� ��� ����

int main()
{
  int radius;
  double area, perimeter;

  printf("������? ");
  scanf("%d", &radius);

  area = PI * radius * radius;
  printf("���� ���� : %.2lf\n", area);

  perimeter = 2 * PI * radius;
  printf("���� �ѷ� : %.2lf\n", perimeter);

  return 0;
}