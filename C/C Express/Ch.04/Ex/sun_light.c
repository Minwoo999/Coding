#include <stdio.h>

int main()
{
  double light_speed = 300000;
  double distance = 149600000;
  double second;
  int minute;

  second = distance / light_speed;
  minute = distance / (light_speed * 60);

  printf("빛의 속도는 %.0lf입니다.\n", light_speed);
  printf("태양과 지구 사이 거리는 %.0lf입니다.\n", distance);
  printf("빛이 태양에서 지구까지 도달하는데 걸리는 시간은 %lf초 입니다.\n", second);
  printf("빛이 태양에서 지꾸까지 도달하는데 걸리는 시간은 %d분 입니다.\n", minute);

  return 0;
}