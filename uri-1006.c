#include <stdio.h>

int main()
{

  double a;
  double b;
  double c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  double media = ((2 * a) + (3 * b) + (5 * c)) / 10;
  printf("MEDIA = %.1f\n", media);

  return 0;
}