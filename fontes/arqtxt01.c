/* Criacao de arquivo texto */

#include <stdio.h>

int main(void)
{
  FILE *PTRARQ;   /* definicao do ponteiro para o arquivo */
  PTRARQ = fopen("ARQTXT01.XXX", "a");
  fclose(PTRARQ);
  return 0;
}
