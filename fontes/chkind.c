/* Checa indice: par ou impar */
#include <stdio.h>
int main(void)
{
  int A[10], B[10];
  int I;
  printf("\n\nCalculo com checagem do indice da matriz\n\n");

  /* Entrada de dados */

  for (I = 0; I <= 9; I++)
    {
      printf("Informe um valor para o elemento nr. %2d: ", I);
      scanf("%d", &A[I]);
    }

  /* Processamento par ou impar */

  for (I = 0; I <= 9; I++)
    if (I % 2 == 0)
       B[I] = A[I] * 5;
    else
       B[I] = A[I] + 5;

  /* Apresentacao das matrizes */

  for (I = 0; I <= 9; I++)
    printf("\nA[%2d] = %2d     B[%2d] = %2d", I, A[I], I, B[I]);
  return 0;
}
