/* Leitura, ordenacao e escrita */

#include <stdio.h>
#include <string.h>

int main(void)
{

  struct CAD_ALUNO
    {
      char  NOME[40];
      float NOTA[4];
    };

  struct CAD_ALUNO ALUNO[8], X;

  int I, J;
  float NOTA_ALU;
  printf("\n\nCadastro de aluno\n\n");

  /* Entrada de dados */

  for (J = 0; J <= 7; J++)
    {
      printf("Informe o nome do %do. Aluno ..: ", J+1);
      fflush(stdin); fgets(ALUNO[J].NOME, 40, stdin);
        for (I = 0; I <= 3; I++)
          {
            printf("Informe a %da. nota ..: ", I+1);
            fflush(stdin); scanf("%f", &NOTA_ALU);
            ALUNO[J].NOTA[I] = NOTA_ALU;
          }
    }

  /* Classificacao dos dados */

  for (I = 0; I <= 6; I++)
    for (J = I+1; J <= 7; J++)
      if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)
        {
          X = ALUNO[I];
          ALUNO[I] = ALUNO[J];
          ALUNO[J] = X;
        }

  /* Saida dos dados */

    for (J = 0; J <= 7; J++)
    {
      printf("\nNome ......: "); puts(ALUNO[J].NOME);
      for (I = 0; I <= 3; I++)
        printf("Nota %da ...: %6.2f\n", I+1, ALUNO[J].NOTA[I]);
    }
  printf("\n\n\n");
  return 0;
}
