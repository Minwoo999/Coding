#include <stdio.h>

int main()
{
  int feet, cm;
  double inch;

  printf("Ű�� �Է��Ͻÿ�(cm) : ");
  scanf("%d", &cm);

  inch = cm / 2.54;
  feet = inch / 12;

  printf("%dcm�� %d��Ʈ %.2lf��ġ�Դϴ�.\n", cm, feet, inch - (feet * 12));

  return 0;
}
