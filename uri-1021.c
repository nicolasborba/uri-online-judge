#include <stdio.h>

int main()
{
  double n;
  int CellAmount;
  int notas[6] = {100, 50, 20, 10, 5, 2};
  double moedas[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
  scanf("%lf", &n);
  n = n + 0.001;
  printf("NOTAS:\n");
  for (int i = 0; i < 6; i++)
  {
    CellAmount = n / notas[i];
    printf("%d nota(s) de R$ %.2f\n", CellAmount, (double)notas[i]);
    n = n - (CellAmount * notas[i]);
  }
  printf("MOEDAS:\n");
  for (int j = 0; j < 6; j++)
  {
    CellAmount = n / moedas[j];
    n = n - (CellAmount * moedas[j]);
    printf("%d moeda(s) de R$ %.2f\n", CellAmount, moedas[j]);
  }
  return 0;
}