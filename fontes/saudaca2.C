/* Pede dados pessoais - fgets() */
#include <stdio.h>
int main(void)
{
  char NOME[20], SB_NOME[20];
  printf("Informe seu nome ........: "); fgets(NOME, 20, stdin);
  printf("Informe seu sobre nome ..: "); fgets(SB_NOME, 20, stdin);
  printf("Seja bem vindo, %s %s\n\n", NOME, SB_NOME);
  return 0;
}
