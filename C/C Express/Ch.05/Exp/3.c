#include <stdio.h>

int main()
{
  int x, y, z, result, max;

  printf("���� 3���� �Է��Ͻÿ� : ");
  scanf("%d %d %d", &x, &y, &z);

  result = (x > y) ? x : y;
  result = (result > z) ? result : z;
  // max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

  printf("%d", result);

  return 0;
}