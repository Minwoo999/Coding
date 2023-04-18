#include <stdio.h>

int main()
{
  char a, b, c, d;
  unsigned int result = 0x00000000;

  printf("첫 번째 문자를 입력하시오 : ");
  scanf("%c", &a);

  printf("두 번째 문자를 입력하시오 : ");
  scanf("%c", &b);

  printf("세 번째 문자를 입력하시오 : ");
  scanf("%c", &c);

  printf("네 번째 문자를 입력하시오 : ");
  scanf("%c", &d);

  result = a;
  result = b << 8;
  result = b << 16

           printf("결과값 : %x", result);

  return 0;
}