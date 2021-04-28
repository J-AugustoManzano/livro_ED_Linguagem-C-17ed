/* Leitura e escrita para 8 alunos */

#include <stdio.h>

int main(void)
{

  struct CAD_ALUNO
    {
      char  NOME[41];
      float NOTA[4];
    };

  struct CAD_ALUNO ALUNO[8];

  int I, J;
  float NOTA_ALU;
  printf("\n\nCadastro de aluno\n\n");
  for (J = 0; J <= 7; J++)
    {
      printf("Informe o nome do %do. Aluno ..: ", J+1);
      fflush(stdin); fgets(ALUNO[J].NOME, 41, stdin);
        for (I = 0; I <= 3; I++)
          {
            printf("Informe a %da. nota ..: ", I+1);
            fflush(stdin); scanf("%f", &NOTA_ALU);
            ALUNO[J].NOTA[I] = NOTA_ALU;
          }
    }
    for (J = 0; J <= 7; J++)
    {
      printf("\nNome ......: "); puts(ALUNO[J].NOME);
      for (I = 0; I <= 3; I++)
        printf("Nota %da ...: %6.2f\n", I+1, ALUNO[J].NOTA[I]);
    }
  printf("\n\n\n");
  return 0;
}
