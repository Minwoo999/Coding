#include <stdio.h>
#define bank_charge 1.75

int main() {
  double dollar, won, rate, bank_rate;

  printf("원/달러 매매기준율? ");
  scanf("%lf", &rate);

  printf("환율 우대율(0~100%%)? ");
  scanf("%lf", &bank_rate);

  rate += rate * bank_charge / 100 * (1 - bank_rate / 100);

  printf("달러를 살 때 환율은 %lf입니다.\n", rate);

  printf("구입할 달러(USD)? ");
  scanf("%lf", &dollar);

  won = rate * dollar;

  printf("USD %.2lf 살 때 ==> KRW %.2lf\n", dollar, won);

  return 0;
}
