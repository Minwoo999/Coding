#include <stdio.h>

int main()
{

  double rate;
  double dollar;
  int won;

  printf("ȯ�� ���� ��ȭ �׼�?");
  scanf("%d", &won);

  printf("ȯ��?");
  scanf("%lf", &rate);

  dollar = won / rate;

  printf("��ȭ %d���� �޷� %lf$ �Դϴ�.", won, dollar);

  return 0;
}