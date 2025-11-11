#include <stdio.h>

int main() {
  int hi, mi, hf, mf;
  int qtd_hr = 0, qtd_min = 0;
  scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

  if ( hi == hf && mi == mf) {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    return 0;
  }
  
  if (hi == hf) {
    if (mi < mf) {
      qtd_min = mf - mi;
    } else if (mi > mf) {
      qtd_hr = 24 - hi + hf -1;
      qtd_min = 60 - mi + mf;
    }
  }

  if (hi < hf) {
    qtd_hr = hf - hi;

    if (mi < mf) {
      qtd_min = mf - mi;
    } else if (mi > mf) {
      qtd_hr -= 1;
      qtd_min = 60 - mi + mf;
    }
  } else if (hi > hf) {
    qtd_hr = 24 - hi + hf;

    if (mi < mf) {
      qtd_min = mf - mi;
    } else if (mi > mf) {
      qtd_hr -= 1;
      qtd_min = 60 - mi + mf;
    }
  } 

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", qtd_hr, qtd_min);
  return 0;
}