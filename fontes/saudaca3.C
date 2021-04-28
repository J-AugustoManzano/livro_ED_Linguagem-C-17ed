/* Dados pessoais com scanf() formatado com %[] */
#include <stdio.h>
int main(void)
{
  char NOME[40];
  printf("Entre o nome completo: "); scanf("%[^\n]", NOME);
  printf("Ola, %s\n", NOME);
  return 0;
}
