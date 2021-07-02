#include <stdio.h>

int main()
{

  double r;
  double n = 3.14159;
  scanf("%lf", &r);
  double result = n * r * r;

  printf("A=%.4f\n", result);

  return 0;
}