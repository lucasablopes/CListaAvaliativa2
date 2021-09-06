#include <stdio.h>

// Objetivo: Ler uma sequência de números em uma linha de entrada e contar o número de negativos, positivos e zeros;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {

  int num, neg, pos, zero;
  char parada;

  // Chumbar o valor zero nas variáveis pra que possam contar corretamente mais tarde

  neg = 0;
  pos = 0;
  zero = 0;

  // Orientações para o usuário de como usar o programa

  printf("Digite os números desejados: ");

  // Contagem e avaliação dos números

  while (parada != '\n') {

    scanf("%d%c", &num, &parada);

    if (num > 0) {
      pos = pos + 1;
    }
    else if (num < 0) {
      neg = neg + 1;
    }
    else {
      zero = zero + 1;
    }
  }

  // Impressão do resultado

  printf("\nNúmeros negativos: %d\nNúmeros Positivos: %d\nZeros: %d", neg, pos, zero);

  return 0;
}