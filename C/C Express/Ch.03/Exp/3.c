#include <stdio.h>

int main()
{
  float w, h;
  float area;

  printf("w?");
  scanf("%f", &w);

  printf("h?");
  scanf("%f", &h);

  area = w * h / 2;
  printf("area : %.2f", area);

  return 0;
}