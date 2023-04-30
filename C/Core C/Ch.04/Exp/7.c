#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c;

  printf("밑변? ");
  scanf("%lf", &a);

  printf("높이? ");
  scanf("%lf", &b);

  c = sqrt(a * a + b * b);

  printf("빗변의 길이 : %lf\n", c);

  return 0;
}