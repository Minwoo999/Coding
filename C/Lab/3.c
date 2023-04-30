#include <stdio.h>

int main() {
  double c, f;
  char type;

  printf("섭씨면 c, 화씨면 f 입력");
  scanf("%c", &type);

  if (type == 'f') {
    printf("화씨 온도를 입력하시오 : ");
    scanf("%lf", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("화씨 %.2lf도는 섭씨 %.2lf도입니다.", f, c);
  } else {
    printf("섭씨 온도를 입력하시오 : ");
    scanf("%lf", &c);
    printf("현재 온도는 섭씨 %.2lf도입니다.", c);
  }

  if (c > 25) {
    printf("덥습니다.");
  } else
    printf("춥습니다.");

  return 0;
}