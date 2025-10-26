#include <stdio.h>
 
int main() {
    double a, b, media, pesoTotal, pesoA = 3.5, pesoB = 7.5;
    scanf("%lf %lf", &a, &b);
    a = a * pesoA;
    b = b * pesoB;
    pesoTotal = pesoA + pesoB;
    media = (a + b)/pesoTotal;
    printf("MEDIA = %.5lf\n", media);
    return 0;
}