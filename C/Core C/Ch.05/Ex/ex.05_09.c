/**********************
프로그램명 : switch를 이용한 사칙연산 계산기
프로그램 내용 : 정수와 연산자를 입력받아 계산 결과를 출력
실습일 : 2023.04.25
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>
int main() {
  int a, b;  // 피연산자
  char op;   // 연산자 기호를 문자로 저장할 변수

  printf("수식? ");
  scanf("%d %c %d", &a, &op, &b);  // 10 + 30 형태로 입력받는다.

  switch (op) {
    case '+':
      printf("%d + %d = %d\n", a, b, a + b);
      break;
    case '-':
      printf("%d - %d = %d\n", a, b, a - b);
      break;
    case '*':
      printf("%d *%d = %d\n", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d\n", a, b, a / b);
      break;
    case '%':
      printf("%d % %d = %d\n", a, b, a % b);
      break;
    default:  // +. -, *, /, % 가 아닌 경우
      printf("잘못된 수식입니다.\n");
      break;
  }
  return 0;
}