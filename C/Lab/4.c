#include <stdio.h>

int main() {
  double fee, tax, kw;
  char name[20];

  printf("이름, 월 사용량(kw) >> ");
  scanf("%s %lf", name, &kw);

  if (kw <= 200)
    fee = 910 + 93.3 * kw;

  else if (kw > 200 && kw <= 400)
    fee = 1600 + 93.3 * 200 + 187.9 * (kw - 200);

  else
    fee = 7300 + 93.3 * 200 + 187.9 * 200 + 280.6 * (kw - 400);

  tax = 0.1;
  fee *= (tax + 1);
  fee = (int)fee / 10 * 10;

  printf("%s의 전기 요금은 %d원", name, (int)fee);

  return 0;
}