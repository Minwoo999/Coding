#include <stdio.h>
#define SQMETER 3.3058

int main()
{
  double x;

  printf("���� �Է��ϼ��� : ");
  scanf("%lf", &x);

  printf("%lf������ �Դϴ�.", SQMETER * x);

  return 0;
}