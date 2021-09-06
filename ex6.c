#include <stdio.h>

// Objetivo: Ler um valor n inteiro e positivo e que calcula a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int n;
  double S;

  // Leitura da variável n

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  // Cálculo e impressão de S

  for (int i = 1; i <= n; i++) {
    S = S + (double)1/i;
    if (i > 1 && i != n) {
      printf(" + 1/%d", i);
    }
    else if (i == n) {
      printf(" + 1/%d = %.2lf", i, S);
    }
    else {
      printf("1");
    }
  }
  
  return 0;
}