#include <stdio.h>
 
int main() {
 
    int number, hora_trabalhada;
    double recebe_por_hora;
    scanf("%d %d %lf", &number, &hora_trabalhada, &recebe_por_hora);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, hora_trabalhada * recebe_por_hora);
 
    return 0;
}