#include <stdio.h>
 
int main() {
 
    char name[9];
    double fixed_salary, total_amount;
    double const commission = 0.15;
    
    scanf("%s %lf %lf", name, &fixed_salary, &total_amount);
    printf("TOTAL = R$ %.2lf\n", fixed_salary + total_amount * commission);
    return 0;
}