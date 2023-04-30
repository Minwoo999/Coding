/**********************
프로그램명 : 학생 정보
프로그램 내용 : 학생의 이름과 성적을 입력받아 출력
실습일 : 2023.04.11
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>

int main()
{
  char name[20];
  int score;

  printf("학생, 이름, 성적 입력 >> ");
  scanf_s("%s %d", name, 20, &score);

  if (score >= 80)
    printf("%s은(는) 우수학생 입니다.", name);
  else
    printf("%s은(는) 불량학생 입니다.", name);

  return 0;
}