#include <stdio.h>

int main()
{
  int feet, cm;
  double inch;

  printf("키를 입력하시오(cm) : ");
  scanf("%d", &cm);

  inch = cm / 2.54;
  feet = inch / 12;

  printf("%dcm는 %d피트 %.2lf인치입니다.\n", cm, feet, inch - (feet * 12));

  return 0;
}
