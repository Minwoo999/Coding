#include <stdio.h>

int main() {
  int x = 0x00000001;

  x = x << 7;
  printf("7번 비트만 1인 값 : %08x %d\n", x, x);

  x = x << 8;
  printf("15번 비트만 1인 값 : %08x %d\n", x, x);

  x = x << 8;
  printf("23번 비트만 1인 값 : %08x %d\n", x, x);

  x = x << 8;
  printf("31번 비트만 1인 값 : %08x %d\n", x, x);

  return 0;
}