#include <stdio.h>
#include <stdlib.h>
int main() {
 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maiorAB = (a + b + abs(a - b))/2;

    (maiorAB < c) ? printf("%d eh o maior valor", c) : printf("%d eh o maior valor", maiorAB);
    
    return 0;
}