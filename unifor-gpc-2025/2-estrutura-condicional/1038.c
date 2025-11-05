#include <stdio.h>

int main() {
  int c, q;
  double price;
  scanf("%d %d", &c, &q);

  switch (c) {
    case 1:
      price = 4.00 * q;
      break;
    case 2: 
      price = 4.50 * q;
      break;
    case 3:
      price = 5.00 * q;
      break;
    case 4:
      price = 2.00 * q;
      break;
    case 5:
      price = 1.50 * q;
      break;
  }

  printf("Total: R$ %.2lf\n", price);

  return 0;
}