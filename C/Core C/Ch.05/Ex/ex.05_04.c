/**********************
프로그램명 : 중첩된 if의 사용 예
프로그램 내용 :
개발자 : 김민우 (201810198)
**********************/

// ex.05_04

#include <stdio.h>

int main()
{
  int age, fee, month;

  printf("나이? ");
  scanf("%d", &age);

  if (age >= 8)

    if (age >= 65) // if문 안에 다른 if문을 포함할 수 있다.
      fee = 5000;
    else
      fee = 10000;
  else
    fee = 0;

  if (age >= 8 && month >= 6 && 8 >= month)
    fee += 5000;

  printf("입장료 : %d\n", fee);

  return 0;
}
