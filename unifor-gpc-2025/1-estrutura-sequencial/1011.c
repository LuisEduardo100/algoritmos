#include <stdio.h>
 
int main() {
    
    double const PI = 3.14159;
    double R; 
    scanf("%lf", &R);
    printf("VOLUME = %.3lf\n", (4.0/3) * PI * R * R * R);
 
    return 0;
}