#include <stdio.h>

int main() {
    double input; 
    int value;
    scanf("%lf", &input);
    int inputConverted = input * 100;
    
    int cedulas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] =  {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < sizeof(cedulas) / sizeof(cedulas[0]); i++) {
        value = inputConverted / cedulas[i];   
        printf("%d nota(s) de R$ %d.00\n", value, cedulas[i] / 100);
        inputConverted %= cedulas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < sizeof(moedas) / sizeof(moedas[0]); i++) {
        value = inputConverted / moedas[i];   
        printf("%d moeda(s) de R$ %.2lf\n", value, (double) moedas[i] / 100);
        inputConverted %= moedas[i];
    }

    
    return 0;
}