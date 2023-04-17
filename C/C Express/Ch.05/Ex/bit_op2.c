#include<stdio.h>

int main()
{
  int a = 32;

  a = ~a + 1;

  printf("%d", a);
  return 0;
}