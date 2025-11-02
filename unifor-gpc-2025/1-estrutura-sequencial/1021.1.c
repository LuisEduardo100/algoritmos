#include <stdio.h>

int main() {
  double value;
  int convertedValue;

  scanf("%lf", &value);

  convertedValue = value * 100;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", convertedValue / 10000);
  convertedValue %= 10000;

  printf("%d nota(s) de R$ 50.00\n", convertedValue / 5000);
  convertedValue %= 5000;

  printf("%d nota(s) de R$ 20.00\n", convertedValue / 2000);
  convertedValue %= 2000;

  printf("%d nota(s) de R$ 10.00\n", convertedValue / 1000);
  convertedValue %= 1000;

  printf("%d nota(s) de R$ 5.00\n", convertedValue / 500);
  convertedValue %= 500;

  printf("%d nota(s) de R$ 2.00\n", convertedValue / 200);
  convertedValue %= 200;

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", convertedValue / 100);
  convertedValue %= 100;

  printf("%d moeda(s) de R$ 0.50\n", convertedValue / 50);
  convertedValue %= 50;

  printf("%d moeda(s) de R$ 0.25\n", convertedValue / 25);
  convertedValue %= 25;

  printf("%d moeda(s) de R$ 0.10\n", convertedValue / 10);
  convertedValue %= 10;

  printf("%d moeda(s) de R$ 0.05\n", convertedValue / 5);
  convertedValue %= 5;

  printf("%d moeda(s) de R$ 0.01\n", convertedValue / 1);
  convertedValue %= 1;
  
  return 0;
}