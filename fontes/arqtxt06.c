/* Cria e grava frases */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;
  char RESP, FRASE[81];
  RESP = 'S';
  PTRARQ = fopen("FRASE2.XXX", "w");
  while(RESP == 'S' || RESP == 's')
    {
      printf("\n\nDigite uma frase qualquer\n\n");
      fflush(stdin);
      fgets(FRASE, 81, stdin);
      fputs(FRASE, PTRARQ);
      printf("\nDeseja continuar (S/N)? ");
      fflush(stdin);
      scanf("%c", &RESP);
    }
  fclose(PTRARQ);
  return 0;
}
