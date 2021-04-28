/* Leitura, ordenacao e escrita */
#include <stdio.h>
#include <string.h>
int main(void)
{
  int I, J;
  char NOME[10][40], X[40];
  printf("Listagem de nomes\n\n");

  /* Entrada dos dados */

  for (I = 0; I <= 9; I++)
    {
      printf("Digite o %2do. nome: ", I+1);
      fflush(stdin); fgets(NOME[I], 40, stdin);
    }

  /* Ordenacao de strings */

  for (I = 0; I <= 8; I++)
    for (J = I+1; J <= 9; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

  /* Apresentacao dos nomes */

  printf("\n");
  for (I = 0; I <= 9; I++)
     printf("Nome: %2d --> %s", I+1, NOME[I]);
  return 0;
}
