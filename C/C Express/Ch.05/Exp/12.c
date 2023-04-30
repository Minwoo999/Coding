#include <stdio.h>

int main()
{
  char a, b, c, d;
  unsigned int result = 0x00000000;

  printf("첫 번째 문자를 입력하시오 : ");
  scanf("%c", &a);
  getchar();

  printf("두 번째 문자를 입력하시오 : ");
  scanf("%c", &b);
  getchar();

  printf("세 번째 문자를 입력하시오 : ");
  scanf("%c", &c);
  getchar();

  printf("네 번째 문자를 입력하시오 : ");
  scanf("%c", &d);
  getchar();

  result = a;
  result = result | b << 8;
  result = result | c << 16;
  result = result | d << 24;
  printf("결과값 : %x", result);

  return 0;
}