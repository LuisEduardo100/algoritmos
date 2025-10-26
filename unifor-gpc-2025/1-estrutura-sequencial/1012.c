#include <stdio.h>
 
int main() {

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double triangule = A * C/2;
    double circle = 3.14159 * C * C;
    double trapeze = ((A + B)*C)/2;
    double square = B * B;
    double rectangle = A * B;
    
    printf("TRIANGULO: %.3lf\n", triangule);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapeze);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);
    
    return 0;
}