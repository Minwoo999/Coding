/**********************
���α׷��� : �ð� ���
���α׷� ���� : �ʸ� �Է� �޾� ��, ��, �� �� ���
�ǽ��� : 2023.04.07
������ : ��ο� (201810198)
**********************/

// time

#include <stdio.h>

int main()
{
  int i_sec, hour, min, sec;

  printf("�ʸ� �Է� >> ");
  scanf("%d", &i_sec);
  hour = i_sec / 3600;
  i_sec = i_sec - hour * 3600;
  min = i_sec / 60;
  i_sec = i_sec - min * 60;
  sec = i_sec;

  printf("�Է¹��� �ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", hour, min, sec);

  return 0;
}