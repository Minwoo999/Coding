#include <stdio.h>

int main()
{
  char a, b, c, d;
  unsigned int result = 0x00000000;

  printf("ù ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &a);
  getchar();

  printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &b);
  getchar();

  printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &c);
  getchar();

  printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
  scanf("%c", &d);
  getchar();

  result = a;
  result = result | b << 8;
  result = result | c << 16;
  result = result | d << 24;
  printf("����� : %x", result);

  return 0;
}