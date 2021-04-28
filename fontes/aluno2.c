/* Leitura e escrita de uma estrutura */
#include <stdio.h>
int main(void)
{

  struct CAD_ALUNO
    {
      char  NOME[41];
      float NOTA[4];
    };

  struct CAD_ALUNO ALUNO;

  int I;
  printf("\nCadastro de aluno\n\n");
  printf("Informe o nome ......: ");
  fflush(stdin); fgets(ALUNO.NOME, 41, stdin);
  for (I = 0; I <= 3; I++)
    {
      printf("Informe a %da. nota ..: ", I+1);
      fflush(stdin);
      scanf("%f", &ALUNO.NOTA[I]);
    }
  printf("\n");
  printf("Nome ......: %s\n", ALUNO.NOME);
  for (I = 0; I <= 3; I++)
    printf("Nota %da ...: %6.2f\n", I+1, ALUNO.NOTA[I]);
  printf("\n\n\n");
  return 0;
}
