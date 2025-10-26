#include <stdio.h>

int main() {
    int cod1, cod2, qt_pieces1, qt_pieces2;
    double unit_value1, unit_value2;
    scanf("%d %d %lf", &cod1, &qt_pieces1, &unit_value1);
    scanf("%d %d %lf", &cod2, &qt_pieces2, &unit_value2);
    printf("VALOR A PAGAR: R$ %.2lf", qt_pieces1 * unit_value1 + qt_pieces2 * unit_value2);
    return 0;
}