/* Pesquisa 2 */
#include <stdio.h>
int main(void)
{
  int NUMERO[5], I, ACHA, PESQ;
  char RESP;
  printf("\nPesquisa sequencial de numeros\n\n");

  /* Entrada de dados */

  for (I = 0; I <= 4; I++)
    {
      printf("Informe o %do. numero: ", I+1);
      fflush(stdin); scanf("%d", &NUMERO[I]);
    }

  /* Processamento da pesquisa enquanto RESP = S */

  RESP = 'S';
  while (RESP == 'S' || RESP == 's')
    {
      printf("\nEntre o numero a ser pesquisado: ");
      fflush(stdin); scanf("%d", &PESQ);
      I = 0;
      ACHA = 0;
      while (I <= 4 && ACHA == 0)
        if (PESQ == NUMERO[I])
          ACHA = 1;
        else
          I += 1;
      if (ACHA == 1)
        printf("%d foi localizado na posicao %d",PESQ, I+1);
      else
        printf("%d nao foi localizado", PESQ);
      printf("\n\nContinua? [S]IM/[N]AO + <Enter>: ");
      fflush(stdin); RESP = getchar();
    }
  return 0;
}
