#include <stdio.h>

int main()
{
  double light_speed = 300000;
  double distance = 149600000;
  double second;
  int minute;

  second = distance / light_speed;
  minute = distance / (light_speed * 60);

  printf("���� �ӵ��� %.0lf�Դϴ�.\n", light_speed);
  printf("�¾�� ���� ���� �Ÿ��� %.0lf�Դϴ�.\n", distance);
  printf("���� �¾翡�� �������� �����ϴµ� �ɸ��� �ð��� %lf�� �Դϴ�.\n", second);
  printf("���� �¾翡�� ���ٱ��� �����ϴµ� �ɸ��� �ð��� %d�� �Դϴ�.\n", minute);

  return 0;
}