#include <stdio.h>

int main()
{

  double a;
  double b;
  scanf("%lf", &a);
  scanf("%lf", &b);
  double media = ((3.5 * a) + (7.5 * b)) / 11;
  printf("MEDIA = %.5f\n", media);

  return 0;
}