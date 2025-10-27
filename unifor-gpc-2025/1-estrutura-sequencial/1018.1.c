#include <stdio.h>

int main() {
  int value;
  int cem, cinquenta, vinte, dez, cinco, dois, um;
  scanf("%d", &value);

  cem = value/100; 
  cinquenta = value % 100 / 50; 
  vinte = value % 100 % 50 / 20; 
  dez = value % 100 % 50 % 20 / 10; 
  cinco = value % 100 % 50 % 20 % 10 / 5; 
  dois = value % 100 % 50 % 20 % 10 % 5 / 2; 
  um = value % 100 % 50 % 20 % 10 % 5 % 2 / 1; 

  printf("%d\n", value);
  printf("%d nota(s) de R$ 100,00\n", cem);
  printf("%d nota(s) de R$ 50,00\n", cinquenta);
  printf("%d nota(s) de R$ 20,00\n", vinte);
  printf("%d nota(s) de R$ 10,00\n", dez);
  printf("%d nota(s) de R$ 5,00\n", cinco);
  printf("%d nota(s) de R$ 2,00\n", dois);
  printf("%d nota(s) de R$ 1,00\n", um);

  return 0;
}