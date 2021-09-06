#include <stdio.h>

// Objetivo: Ler as mercadorias compradas e vendidas por um comerciante e definir em qual faixa de lucro ele se encontra e o seu lucro total;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int prod, l10, l15, l20;
  double compra, venda, lucro, sumlucro, pclucro;

  // Leitura da variável produtos

  printf("Quantos produtos serão digitados? ");
  scanf("%d", &prod);

  // Chumbar valores nas variáveis para que funcionem para contagem futuramente

  sumlucro = 0;
  l10 = 0;
  l15 = 0;
  l20 = 0;

  // Linhas de compra/venda

  for (int i = 0; i < prod; i++) {
    if (i < prod-1) {
      printf("\nProduto %d Compra e Venda: ", i+1);
      scanf("%lf %lf", &compra, &venda);

      lucro = venda - compra;
      sumlucro = sumlucro + lucro;
      pclucro = 100*lucro/compra;

      if (pclucro < 10) {
        l10 ++;
      }
      else if (pclucro > 20) {
        l20 ++;
      }
      else {
        l15 ++;
      }

    }
    else {
    printf("\nLucro do Produto %d: ", i+1);
    scanf("%lf", &lucro);

    sumlucro = sumlucro + lucro; 
    l20 ++;
    }
  }

  // Impressão das faixas de Lucro

  printf("\nOs produtos deram %.2lf de lucro total", sumlucro);
  printf("\n%d deram menos de 10%% de lucro.", l10);
  printf("\n%d deram entre 10%% e 20%% de lucro.", l15);
  printf("\n%d deram mais de 20%% de lucro.", l20);

  return 0;
}