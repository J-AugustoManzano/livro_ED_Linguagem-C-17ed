/* Le frase caractere a caractere */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;
  char LETRA;
  PTRARQ = fopen("FRASE.XXX", "r");

  printf("\n\nFrase = ");

  while((LETRA = fgetc(PTRARQ)) != EOF)
    printf("%c", LETRA);
  fclose(PTRARQ);
  return 0;
}
