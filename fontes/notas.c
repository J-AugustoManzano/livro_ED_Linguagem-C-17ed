/* Calculo de Media de 8 alunos com 4 notas */
#include <stdio.h>
int main(void)
{
  float MD[8][4];
  int I, J;
  printf("\nLeitura e apresentacao de notas\n");

  /* Entrada das notas */

  for (I = 0; I <= 7; I ++)
    {
      printf("\nInforme as notas do %do. aluno: \n\n", I + 1);
      for (J = 0; J <= 3; J ++)
        {
          printf("Nota %d: ", J + 1);
          scanf("%f", &MD[I][J]);
        }
    }

  /* Saida das notas */

  for (I = 0; I <= 7; I ++)
    {
      printf("\nAs notas do aluno %d sao : \n\n",  I+ 1);
      for (J = 0; J <= 3; J ++)
        printf("Nota %d: %5.2f\n",  J + 1, MD[I][J]);
    }
  return 0;
}
