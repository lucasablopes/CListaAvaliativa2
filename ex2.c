#include <stdio.h>

// Objetivo: Ler uma sequência de números em uma linha de entrada, contar o número de negativos, positivos e zeros e calcular a fatia percentual de cada um deles;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {

  int qtdnum, num, neg, pos, zero;
  char parada;
  double percneg, percpos, perczero;

  // Chumbar o valor zero nas variáveis pra que possam contar corretamente mais tarde

  neg = 0;
  pos = 0;
  zero = 0;
  qtdnum = 0;

  // Orientações para o usuário de como usar o programa

  printf("Digite os números desejados: ");

  // Contagem e avaliação dos números

  while (parada != '\n') {

    scanf("%d%c", &num, &parada);

    qtdnum = qtdnum + 1;

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

  // Avaliação percentual de cada categoria numérica

  percneg = 100 * (double) neg / qtdnum;
  percpos = 100 * (double) pos / qtdnum;
  perczero = 100 * (double) zero / qtdnum;

  // Impressão do resultado

  printf("\nNúmeros negativos em absoluto: %d\nNúmeros negativos em percentual: %.2lf%%\n", neg, percneg);
  
  printf("\nNúmeros positivos em absoluto: %d\nNúmeros positivos em percentual: %.2lf%%\n", pos, percpos);
  
  printf("\nZeros em absoluto: %d\nZeros em percentual: %.2lf%%", zero, perczero);
  
  return 0;
}