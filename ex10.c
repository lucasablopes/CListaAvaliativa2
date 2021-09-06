#include <stdio.h>

// Objetivo: Ler os votos em cada candidato, votos em branco e votos nulos;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int codcan, c1, c2, c3, c4, brancos, nulos;

  // Chumbar valores nas variáveis para que funcionem para contagem futuramente

  c1 = 0;
  c2 = 0;
  c3 = 0;
  c4 = 0;
  brancos = 0;
  nulos = 0;
  codcan = -1;

  // Impressão das instruções

  printf("1, 2, 3, 4 = voto para os respectivos candidatos; \n5 = voto nulo; \n6 = voto em branco;\n0 para parar a votação.\n\n");

  // Contagem de votos

  while (codcan != 0) {
    printf("Digite o seu voto: ");
    scanf("%d", &codcan);

    if (codcan == 1)
    c1 ++;
    else if (codcan == 2)
    c2 ++;
    else if (codcan == 3)
    c3 ++;
    else if (codcan == 4)
    c4 ++;
    else if (codcan == 5)
    nulos ++;
    else if (codcan == 6)
    brancos ++;
    else
    printf("VOTO INVÁLIDO\n");
  }

  printf("\nCandidato 1: %d votos", c1);
  printf("\nCandidato 2: %d votos", c2);
  printf("\nCandidato 3: %d votos", c3);
  printf("\nCandidato 4: %d votos", c4);
  printf("\nVotos brancos: %d votos", brancos);
  printf("\nVotos nulos: %d votos", nulos);

  return 0;
}