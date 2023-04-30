/**********************
프로그램명 : 누진세 계산 프로그램
프로그램 내용 : 사용한 전기량을 입력받아 전기세를 출력
실습일 : 2023.04.25
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>

int main() {
  float kw;
  float total_pay, base_pay, use_pay;
  int i_pay;

  printf("월 사용량(kw)? >> ");
  scanf("%f", &kw);

  if (kw <= 200) {
    base_pay = 910;
    use_pay = 112.0 * kw;
  } else if (kw <= 400) {
    base_pay = 1600;
    use_pay = 200 * 112.0 + (kw - 200) * 206.6;
  } else {
    base_pay = 7300;
    use_pay = 200 * 112.0 + 200 * 206.6 + (kw - 400) * 299 * 3;
  }

  total_pay = base_pay + use_pay;
  total_pay *= 1.1;
  i_pay = total_pay;
  i_pay = (i_pay / 10) * 10;

  printf("전기 요금 합계 : %d\n", (int)i_pay);

  return 0;
}