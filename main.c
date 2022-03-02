#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
  const float TAUX_CONVERTION = 1.14;
  float montant_euro = 0.0, montant_dollar = 0.0;

  printf("Donner un montant en euro:");
  scanf("%f", &montant_euro);

  montant_dollar = montant_euro * TAUX_CONVERTION;

  printf("%f euros = %f dollars avec un taux de convertion = %f", montant_euro, montant_dollar, TAUX_CONVERTION);

  return 0;
}
