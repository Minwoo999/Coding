/**********************
���α׷��� : bmi ���
���α׷� ���� :
������ : ��ο� (201810198)
**********************/

// ex.04_1

#include <stdio.h>

int main()
{
  double m, cm, kg, bmi;
  char name[20];

  printf("�����Կ� Ű�� ���ʷ� �Է��Ͻÿ� : ");
  scanf("%lf %lf", &kg, &cm);

  printf("�̸��� �Է��Ͻÿ�. : ");
  scanf("%s", name);

  m = cm * 0.01;
  bmi = kg / (m * m);

  printf("Ű %.2lf cm, ������ %.2lf kg�� %s��BMI������ %.2lf�Դϴ�.\n", cm, kg, name, bmi);

  if (bmi <= 18.5)
  {
    165

        printf("��ü��");
  }

  else if (18.5 < bmi && bmi <= 23.0)
  {
    printf("����");
  }
  else if (23 < bmi && bmi <= 25)
  {
    printf("��ü��");
  }
  else if (25 < bmi && bmi <= 30)
  {
    printf("��");
  }

  else
  {
    printf("����");
  }
  return 0;
}
