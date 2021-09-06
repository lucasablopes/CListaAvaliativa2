#include <stdio.h>

// Objetivo: Imprimir os L primeiros elementos da série de Fibonacci;
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

  for (int i = 0; i < L; i++) {
    if (i <= 1)
    fib3 = i;
    else {
      fib3 = fib1 + fib2;
      printf(", %d", fib3);
      fib1 = fib2;
      fib2 = fib3;
    }
  }

  return 0;
}
