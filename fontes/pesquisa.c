/* Pesquisa */
#include <stdio.h>
#include <string.h>
int main(void)
{
  int I, ACHA;
  char NOME[10][40], PESQ[40], RESP;
  printf("\nPesquisa sequencial de nomes\n\n");

  /* Entrada dos dados */

  for (I = 0; I <= 9; I++)
    {
      printf("Digite o %2do. nome: ", I+1);
      fflush(stdin); fgets(NOME[I], 40, stdin);
    }

  /* Processamento da pesquisa enquanto RESP = S */

  RESP = 'S';
  while (RESP == 'S' || RESP == 's')
    {
      printf("\nEntre o nome a ser pesquisado: ");
      fflush(stdin); fgets(PESQ, 40, stdin);
      I = 0;
      ACHA = 0;
      while (I <= 9 && ACHA == 0)
        if (strcmp(PESQ, NOME[I]) == 0)
          ACHA = 1;
        else
          I += 1;
      if (ACHA == 1)
        printf("%s foi localizado na posicao %d",PESQ, I+1);
      else
        printf("%s nao foi localizado", PESQ);
      printf("\n\nContinua? [S]IM/[N]AO + <Enter>: ");
      fflush(stdin); RESP = getchar();
    }
  return 0;
}
