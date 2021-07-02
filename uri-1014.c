#include <stdio.h>

int main()
{
  int x;
  double y;
  scanf("%d", &x);
  scanf("%lf", &y);
  double average = x / y;
  printf("%.3f km/l\n", average);

  return 0;
}