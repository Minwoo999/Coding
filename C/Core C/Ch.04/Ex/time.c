/**********************
���α׷��� : �ð� ���
���α׷� ���� : �ʸ� �Է� �޾� ��, ��, �� �� ���
�ǽ��� : 2023.04.07
������ : ��ο� (201810198)
**********************/

// time

#include <stdio.h>

int main() {
  int sec, hour, min;

  printf("�ʸ� �Է� >> ");
  scanf("%d", &sec);

  hour = sec / 3600;
  min = sec % 3600 / 60;
  sec %= 60;

  printf("%d�ð� %d�� %d�� ", hour, min, sec);

  return 0;
}
