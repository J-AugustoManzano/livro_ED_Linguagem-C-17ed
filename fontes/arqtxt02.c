/* Grava palavra no arquivo texto */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;
  char PALAVRA[20];
  PTRARQ = fopen("ARQTXT01.XXX", "w");

  printf("\n\nEscreva uma palavra: ");
  scanf("%s", PALAVRA);

  fprintf(PTRARQ, "%s", PALAVRA);
  fclose(PTRARQ);
  return 0;
}
