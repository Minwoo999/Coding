/**********************
프로그램명 : 학생 성적 출력
프로그램 내용 : 학생의 이름과 성적을 입력 받아 학생의 성적을 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// ex.05_01

#include <stdio.h>

int main()
{
  int mid, final;
  double avg;
  char name[20];
  char grade;

  printf("이름을 입력하세요 . : ");
  scanf("%s", name);
  printf("중간고사 점수를 입력하세요. : ");
  scanf("%d", &mid);
  printf("기말고사 점수를 입력하세요. : ");
  scanf("%d", &final);

  avg = (mid + final) / 2.0;

  if (avg >= 90)
  {
    grade = 'A';
  }
  else if (avg >= 80)
  {
    grade = 'B';
  }
  else if (avg >= 70)
  {
    grade = 'C';
  }
  else if (avg >= 60)
  {
    grade = 'D';
  }
  else
  {
    grade = 'F';
  }

  printf("%s의 성적은 %c입니다. \n", name, grade);

  return 0;
}
