/**********************
���α׷��� : �л� ���� ���
���α׷� ���� : �л��� �̸��� ������ �Է� �޾� �л��� ������ ���
�ǽ��� : 2023.04.18
������ : ��ο� (201810198)
**********************/

// ex.05_01

#include <stdio.h>

int main()
{
  int mid, final;
  double avg;
  char name[20];
  char grade;

  printf("�̸��� �Է��ϼ��� . : ");
  scanf("%s", name);
  printf("�߰���� ������ �Է��ϼ���. : ");
  scanf("%d", &mid);
  printf("�⸻��� ������ �Է��ϼ���. : ");
  scanf("%d", &final);

  avg = (mid + final) / 2.0;

  if (avg >= 90)
  {
    grade = 'A';
  }
  else if (avg >= 80)
  {
    grade = 'B';
  }
  else if (avg >= 70)
  {
    grade = 'C';
  }
  else if (avg >= 60)
  {
    grade = 'D';
  }
  else
  {
    grade = 'F';
  }

  printf("%s�� ������ %c�Դϴ�. \n", name, grade);

  return 0;
}
