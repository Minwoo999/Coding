#include <stdio.h>
#define MIN(x, y) (x < y ? x : y)

int main() {
  int num1, num2, num3, num4;
  int min, min2;

  printf("정수 네개를 입력하세요.");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  min = MIN(num1, num2);
  min2 = MIN(num3, num4);

  min = MIN(min, min2);

  printf("4개의 정수 중 최솟값은 %d", min);

  return 0;
}