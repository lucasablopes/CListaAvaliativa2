#include <stdio.h>

// Objetivo: A partir da leitura de número de filhos e salários até que um negativo seja inserido, calcular média do salário da população, média do número de filhos, maior salário, percentual de pessoas com salário até R$100,00;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int pessoas, pessoaspercentualsalario, sumfilhos, filhos;
  double medfilhos, medsalario, maisalario, percentualsalario, sumsalario, salario;

  // Chumbar valores nas variáveis para que funcionem para contagem futuramente

  sumsalario = 0;
  pessoaspercentualsalario = 0;
  pessoas = 0;
  sumfilhos = 0;

  // Leitura e avaliação de dados
  
  while (salario >= 0) {
    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    if (salario >= 0) {
      printf("Digite o número de filhos que possui: ");
      scanf("%d", &filhos);

      sumfilhos = sumfilhos + filhos;  
      sumsalario = sumsalario + salario;  
      pessoas = pessoas + 1;
    
      if (salario > maisalario) {
         maisalario = salario;
      }
      if (salario <= 100) {
        pessoaspercentualsalario++;
      }
    }
  }

  // Cálculo das médias e percentuais

  medfilhos = sumfilhos/pessoas;
  medsalario = sumsalario/pessoas;
  percentualsalario = 100*pessoaspercentualsalario/pessoas;

  // Impressão dos resultados

  printf("\nO maior salário é R$%.2lf\n", maisalario);
  printf("A média dos salários é R$%.2lf\n", medsalario);
  printf("A média de filhos é %.2lf\n", medfilhos);
  printf("O percentual de pessoas que recebem menos de R$100.00 é %.2lf%%", percentualsalario);

  return 0;
}