/**********************
프로그램명 : 중간고사과 기말고사 성적을 입력받아 합격 여부를 출력
프로그램 내용 : if의 사용 예
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// ex.05_01

#include <stdio.h>

int main()
{
  int mid, final;
  double avg;

  printf("중간고사 점수를 입력하세요. : ");
  scanf("%d", &mid);
  printf("기말고사 점수를 입력하세요. : ");
  scanf("%d", &final);

  avg = (mid + final) / 2.0;

  if (avg < 70)
  {
    printf("재시!!!\n"); // avg < 70인 경우에 수행된다.

    // if문 다음 문장에서 실행의 흐름이 다시 만난다.
    printf("다음 수업은 일주일 후입니다.\n");
  }

  else
    printf("통과!!!\n"); // avg>=70인 경우에 수행된다.

  return 0;
}
