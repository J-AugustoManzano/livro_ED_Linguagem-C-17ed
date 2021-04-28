/* Cria e grava frase caractere a caractere */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;
  char LETRA;
  PTRARQ = fopen("FRASE.XXX", "w");

  printf("\n\nEscreva a frase desejada\n\n");

  while((LETRA = getchar()) != '\n')
    putc(LETRA, PTRARQ);
  fclose(PTRARQ);
  return 0;
}
