#include <stdio.h>

int main()
{

  int code1;
  int code2;
  int quantity1;
  int quantity2;
  double price1;
  double price2;
  scanf("%d %d %lf", &code1, &quantity1, &price1);
  scanf("%d %d %lf", &code2, &quantity2, &price2);
  double total = (quantity1 * price1) + (quantity2 * price2);
  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}