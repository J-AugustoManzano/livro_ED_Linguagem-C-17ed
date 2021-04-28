/* Leitura e escrita de 10 nomes */
#include <stdio.h>
int main(void)
{
  int I;
  char NOME[10][40];
  printf("\n\nListagem de nomes\n\n");

  /* Entrada dos dados */

  for (I = 0; I <= 9; I++)
    {
      printf("Digite o %2do. nome: ", I+1);
      fflush(stdin); fgets(NOME[I], 40, stdin);
    }

  /* Apresentacao dos nomes */

  for (I = 0; I <= 9; I++)
     printf("Nome: %2d --> %s", I+1, NOME[I]);
  return 0;
}
