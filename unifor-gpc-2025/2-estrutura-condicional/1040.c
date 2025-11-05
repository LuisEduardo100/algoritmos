#include <stdio.h>

int main() {
  float N1, N2, N3, N4, NE, avg, avgExame;
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
  int pt = 10;
  N1 *= 2, N2 *= 3, N3 *= 4, N4 *= 1;
  avg = (N1 + N2 + N3 + N4) / pt;

  printf("Media: %.1f\n", avg);

  if (avg >= 7) {
    printf("Aluno aprovado.\n");
  } else if (avg < 5) {
    printf("Aluno reprovado.\n");
  } else {
    printf("Aluno em exame.\n");
    scanf("%f", &NE);
    printf("Nota do exame: %.1f\n", NE);
    
    avgExame = (avg + NE) / 2;
    (avgExame >= 5) ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n", avgExame);
  }





  return 0;
}