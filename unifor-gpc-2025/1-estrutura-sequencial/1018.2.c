#include <stdio.h>

int main() {
  int value;
  int cem, cinquenta, vinte, dez, cinco, dois, um;
  scanf("%d", &value);
  printf("%d\n", value);

  cem = value/100;
  value %= 100;

  cinquenta = value / 50; 
  value %= 50;

  vinte = value / 20; 
  value %= 20;

  dez = value / 10;
  value %= 10;

  cinco = value / 5;
  value %= 5;

  dois = value / 2; 
  value %= 2;

  printf("%d nota(s) de R$ 100,00\n", cem);
  printf("%d nota(s) de R$ 50,00\n", cinquenta);
  printf("%d nota(s) de R$ 20,00\n", vinte);
  printf("%d nota(s) de R$ 10,00\n", dez);
  printf("%d nota(s) de R$ 5,00\n", cinco);
  printf("%d nota(s) de R$ 2,00\n", dois);
  printf("%d nota(s) de R$ 1,00\n", value);

  return 0;
}