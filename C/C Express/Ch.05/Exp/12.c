#include <stdio.h>

int main()
{
  char a, b, c, d;
  unsigned int result = 0x00000000;

  printf("ù ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &a);

  printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &b);

  printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &c);

  printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &d);

  result = a;
  result = b << 8;
  result = b << 16

           printf("����� : %x", result);

  return 0;
}