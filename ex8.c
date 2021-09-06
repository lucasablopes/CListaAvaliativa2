#include <stdio.h>

// Objetivo: Imprimir todos os elementos da série de Fibonacci menores que L;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int L, fib1 = 0, fib2 = 1, fib3;

  // Leitura da variável L

  printf("Digite o valor de L: ");
  scanf("%d", &L);

  // Cálculo e impressão da sequência de Fibonacci

  printf("\n%d, %d", fib1, fib2);

  while (fib3 < L) {
      fib3 = fib1 + fib2;
      if (fib3 < L) {
        printf(", %d", fib3);
        fib1 = fib2;
        fib2 = fib3;
      }
  }
  
  return 0;
}