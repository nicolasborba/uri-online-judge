#include <stdio.h>

int main()
{
  double a;
  double b;
  double c;
  double pi = 3.14159;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  double triangleArea = (a * c) / 2.0;
  double circleRadius = pi * (c * c);
  double trapezoidArea = ((a + b) * c) / 2;
  double squareArea = b * b;
  double rectangleArea = a * b;
  printf("TRIANGULO: %.3f\n", triangleArea);
  printf("CIRCULO: %.3f\n", circleRadius);
  printf("TRAPEZIO: %.3f\n", trapezoidArea);
  printf("QUADRADO: %.3f\n", squareArea);
  printf("RETANGULO: %.3f\n", rectangleArea);

  return 0;
}