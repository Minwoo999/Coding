#include <stdio.h>

int main()
{

  double rate;
  double dollar;
  int won;

  printf("환전 받을 원화 액수?");
  scanf("%d", &won);

  printf("환율?");
  scanf("%lf", &rate);

  dollar = won / rate;

  printf("원화 %d원은 달러 %lf$ 입니다.", won, dollar);

  return 0;
}