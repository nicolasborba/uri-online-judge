#include <stdio.h>
#include <math.h>

int main()
{
  double x1;
  double x2;
  double y1;
  double y2;

  scanf("%lf %lf", &x1, &y1);
  scanf("%lf %lf", &x2, &y2);
  double distance = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
  printf("%.4f\n", distance);

  return 0;
}