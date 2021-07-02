#include <stdio.h>
#include <math.h>

int main()
{
  double a;
  double b;
  double c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double delta = pow(b, 2) - 4 * a * c;
  if (a == 0)
  {
    printf("Impossivel calcular\n");
  }
  else if (delta < 0)
  {
    printf("Impossivel calcular\n");
  }
  else
  {
    double total1 = (-b + sqrt(delta)) / (2 * a);
    double total2 = (-b - sqrt(delta)) / (2 * a);
    printf("R1 = %.5f\n", total1);
    printf("R2 = %.5f\n", total2);
  }

  return 0;
}