#include <stdio.h>

int main()
{
  int salary;
  double year;

  printf("salary?");
  scanf("%d", &salary);

  year = 100000.0 / salary;

  printf("year : %.2lf", year);

  return 0;
}