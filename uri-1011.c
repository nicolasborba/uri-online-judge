#include <stdio.h>
#include <math.h>

int main()
{

  double r;
  double pi = 3.14159;
  scanf("%lf", &r);
  double volume = (4 / 3.0) * pi * (r * r * r);
  printf("VOLUME = %.3f\n", volume);

  return 0;
}