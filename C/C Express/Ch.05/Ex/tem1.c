#include <stdio.h>

int main()
{
  double c, f;

  printf("ȭ�� �µ��� �Է��Ͻÿ�. : ");
  scanf("%lf", &f);

  c = ((double)5 / 9) * (f - 32.0);

  printf("���� �µ��� %lf �Դϴ�. ", c);

  return 0;
}