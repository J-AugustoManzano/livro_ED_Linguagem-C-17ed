/* Apresenta frases */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;
  char FRASE[81];
  PTRARQ = fopen("FRASE2.XXX", "r");
  while(fgets(FRASE, 80, PTRARQ) != NULL)
    printf("%s", FRASE);
  fclose(PTRARQ);
  return 0;
}
