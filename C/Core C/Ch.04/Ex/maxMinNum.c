#include <stdio.h>
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)

int main()
{

  int a, b, c, d;
  int max, max2;
  int min, min2;

  printf("네 개의 정수 입력 >> ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  // max = a > b ? a: b;

  max = MAX(a, b);
  max2 = MAX(c, d);

  // max = MAX(max, max2);
  max = MAX(MAX(a, b), MAX(c, d));

  min = MIN(a, b);
  min2 = MIN(c, d);
  min = MIN(MIN(a, b), MIN(c, d));

  printf("큰 값 : %d \n", max);
  printf("작은 값 : %d\n", min);

  return 0;
}