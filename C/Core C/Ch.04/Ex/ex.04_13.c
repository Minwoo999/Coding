/**********************
프로그램명 : 게시판 프로그램의 페이지 수 구하기
프로그램 내용 : 항목수와 페이지를 입력받아 필요한 페이지 수와 마지막 페이지의 항목 수를 출력
개발자 : 김민우 (201810198)
**********************/

// ex.04_13

#include <stdio.h>

int main()
{
  int items = 0; // 전체 항목 수
  int pages = 0, left = 0;
  int items_per_page = 0; // 한 페이지 당 항목 수

  printf("항목수? ");
  scanf("%d", &items);

  printf("한 페이지 당 항목 수? ");
  scanf("%d", &items_per_page);

  pages = items / items_per_page; // 페이지 수
  left = items % items_per_page;  // 남은 항목 수

  printf("필요한 총 페이지 수 : %d\n", pages);
  printf("마지막 페이지의 항목 수 : %d\n",
         left > 0 ? left : items_per_page);

  return 0;
}
