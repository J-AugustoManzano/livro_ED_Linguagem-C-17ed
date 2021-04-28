/* Pede dados pessoais */
#include <stdio.h>
int main(void)
{
  char NOME[10], SB_NOME[15];
  printf("Informe seu nome ........: "); scanf("%s", NOME);
  printf("Informe seu sobre nome ..: "); scanf("%s", SB_NOME);
  printf("Seja bem vindo, %s %s\n\n", NOME, SB_NOME);
  return 0;
}

