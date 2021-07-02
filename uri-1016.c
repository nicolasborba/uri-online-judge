#include <stdio.h>

int main()
{
  int speed1 = 60;
  int speed2 = 90;
  int speedDifference = speed2 - speed1;
  int distance;
  scanf("%d", &distance);
  int minutes = distance * 2;
  printf("%d minutos\n", minutes);

  return 0;
}