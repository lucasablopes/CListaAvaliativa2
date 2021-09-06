#include <stdio.h>

// Objetivo: Ler um valor N inteiro e positivo e que calcula e escreve o valor de E: E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int n, fatorial;
  double E, contagem;

  // Chumbar valores nas variáveis para que funcionem para contagem futuramente

  fatorial = 1;
  E = 1;
  contagem = 0;

  // Leitura da variável n

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  // Cálculo de E

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      fatorial = fatorial * j;
    }
    contagem = (double)1/fatorial;
    E = E + contagem;
  }

  // Impressão de E

  printf("O valor E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! = %.10lf", E);

  
  return 0;
}