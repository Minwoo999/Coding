#include <stdio.h>

int main() {
  int price, sale, sale_price;

  printf("제품의 가격? ");
  scanf("%d", &price);

  printf("할인율? ");
  scanf("%d", &sale);

  sale_price = price * (100 - sale) / 100;

  printf("할인가 : %d (%d원 할인)\n", sale_price, price - sale_price);

  return 0;
}