/**********************
���α׷��� : bmi ���
���α׷� ���� : Ű�� �����Ը� �Է� �޾Ƽ� ����ϴ� ���α׷�
�ǽ��� : 2023.04.07
������ : ��ο� (201810198)
**********************/

// bmi

#include <stdio.h>

int main()
{
  double bmi, h_cm, height, weight;

  printf("Ű(cm), ������ �Է� >> ");
  scanf("%lf %lf", &h_cm, &weight);
  height = h_cm / 100;
  bmi = weight / (height * height);

  printf("BMI�� %lf �Դϴ�.", bmi);

  return 0;
}