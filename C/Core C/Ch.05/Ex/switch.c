/**********************
프로그램명 : 점수를 입력 받아 성적을 출력
프로그램 내용 : swith문을 이용해 점수를 입력 받아 성적을 출력
실습일 : 2023.04.26
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>

int main() {
  int score;
  char grade;

  printf("점수 ?");
  scanf("%d", &score);

  switch (score / 10) {
    case 10:
      grade = 'A';
      break;
    case 9:
      grade = 'A';
      break;
    case 8:
      grade = 'B';
      break;
    case 7:
      grade = 'C';
      break;
    case 6:
      grade = 'D';
      break;
    default:
      grade = 'F';
      break;
  }
  printf("%d점은 %c 입니다.", score, grade);

  return 0;
}