// ¦���� 1 Ȧ���� 0

#include <stdio.h>

int main()
{
  int num, result;

  printf("���ڸ� �Է��Ͻÿ�. ");
  scanf("%d", &num);

  result = (num % 2 == 0) && (num+1 % 2 !=0);

  printf("¦�� ���� = %d", result);

  return 0;
}