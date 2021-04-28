/* Leitura e escrita de uma estrutura */
#include <stdio.h>
int main(void)
{

  struct CAD_ALUNO
    {
      char  NOME[40];
      float NOTA1;
      float NOTA2;
      float NOTA3;
      float NOTA4;
    };

  struct CAD_ALUNO ALUNO;

  printf("\nCadastro de aluno\n\n");
  printf("Informe o nome ......: ");
  fflush(stdin); fgets(ALUNO.NOME, 40, stdin);
  printf("Informe a 1a. nota ..: "); scanf("%f", &ALUNO.NOTA1);
  printf("Informe a 2a. nota ..: "); scanf("%f", &ALUNO.NOTA2);
  printf("Informe a 3a. nota ..: "); scanf("%f", &ALUNO.NOTA3);
  printf("Informe a 4a. nota ..: "); scanf("%f", &ALUNO.NOTA4);
  printf("\n");
  printf("Nome .....: %s\n", ALUNO.NOME);
  printf("Nota 1 ...: %6.2f\n" , ALUNO.NOTA1);
  printf("Nota 2 ...: %6.2f\n" , ALUNO.NOTA2);
  printf("Nota 3 ...: %6.2f\n" , ALUNO.NOTA3);
  printf("Nota 4 ...: %6.2f\n" , ALUNO.NOTA4);
  printf("\n\n\n");
  return 0;
}
