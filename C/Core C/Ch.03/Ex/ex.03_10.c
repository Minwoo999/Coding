/**********************
프로그램명 :
프로그램 내용 :
개발자 : 김민우 (201810198)
**********************/

// ex.03_

#include <stdio.h>

int main()
{
  printf("sizeof(\'a\') = %d\n", sizeof('a'));
  printf("sizeof(12345) = %d\n", sizeof(12345));
  printf("sizeof(12345U) = %d\n", sizeof(12345U));
  printf("sizeof(12345L) = %d\n", sizeof(12345L));

  printf("sizeof(12.34F) = %d\n", sizeof(12.34F));
  printf("sizeof(12.34567) = %d\n", sizeof(12.34567));
  printf("sizeof(1.234e-5) = %d\n", sizeof(1.234e-5));

  printf("sizeof(\"abcde\") = %d\n", sizeof("abcde"));

  return 0;
}
