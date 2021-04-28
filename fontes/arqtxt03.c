/* Leitura de um arquivo texto */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;
  char PALAVRA[20];
  PTRARQ = fopen("ARQTXT01.XXX", "r");
  fscanf(PTRARQ, "%s", PALAVRA);

  printf("Palavra = %s", PALAVRA);

  fclose(PTRARQ);
  return 0;
}

