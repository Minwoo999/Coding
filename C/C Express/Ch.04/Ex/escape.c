#include <stdio.h>

int main()
{
  int id, pw;

  printf("ID�� PW�� 4���� ���ڷ� �Է��ϼ��� : \n");

  printf("ID : ____\b\b\b\b");
  scanf("%d", &id);

  printf("PW : ____\b\b\b\b");
  scanf("%d", &pw);

  printf("\a �Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�. \n", id, pw);

  return 0;
}