/**********************
프로그램명 : 날씨 정보
프로그램 내용 : 온도를 입력받아 날씨 정보를 출력
실습일 : 2023.04.11
개발자 : 김민우 (201810198)
**********************/
#include <stdio.h>

int main()
{
  double c, f;
  char type; //'c', 'f'

  printf("섭씨면 c, 화씨면 f 입력 >> ");
  scanf_s("%c", &type);

  if (type == 'f')
  {
    printf("오늘 온도 (화씨) 입력 >> ");
    scanf_s("%lf", &f);

    c = (5.0 / 9) * (f - 32);
    printf("화씨 %.2lf도는 섭씨 %.2lf도 입니다.\n", f, c);
  }

  if (type == 'c')
  {
    printf("오늘 온도 (섭씨) 입력 >> ");
    scanf_s("%lf", &c);
    f = (9.0 / 5) * c + 32;
  }

  if (c >= 30)
    printf("오늘 날씨는 덥습니다.\n");
  else if (c >= 10)
    printf("오늘 날씨는 좋습니다.\n");
  else if (c >= 0)
    printf("오늘 날씨는 쌀쌀합니다.\n");
  else
    printf("오늘 날씨는 춥습니다.\n");

  return 0;
}