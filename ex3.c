#include <stdio.h>

// Objetivo: Ler dez números e indicar se são divisíveis por 3 e 9, 2, 5;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {

  int numeros, divisTresNove, divisDois, divisCinco;

  // Chumbar o valor zero nas variáveis pra que possam contar corretamente mais tarde

  divisDois = 0;
  divisCinco = 0;
  divisTresNove = 0;

  // Leitura e interpretação dos números

  for (int i = 0; i < 10; i++) {
    printf("Número %d: ", i+1);
    scanf("%d", &numeros);

    if (numeros%9 == 0 || numeros%5 == 0 || numeros%2 == 0) {
      if (numeros%9 == 0) {
        divisTresNove ++;
      }
      if (numeros%5 == 0) {
        divisCinco ++;
      }
      if (numeros%2 == 0) {
        divisDois ++;
      }
    }
    else {
      printf("Número não é divisível pelos valores\n");
    }
  }

  // Impressão dos resultados

  printf("\n%d números são divisíeis por 3 e 9.", divisTresNove);
  printf("\n%d números são divisíeis por 2.", divisDois);
  printf("\n%d números são divisíeis por 5.", divisCinco);
  
  return 0;
}