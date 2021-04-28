/* Soma os elementos impares de um vetor */
#include <stdio.h>
int main(void)
{
  int A[5];
  int I, SOMA = 0;
  printf("\nSomatorio de elementos impares\n\n");

  /* Entrada de dados */

  for (I = 0; I <= 4; I++)
    {
      printf("Informe um valor para o elemento nr. %2d: ", I);
      scanf("%d", &A[I]);
    }

  /* Processamento elemento impar */

  for (I = 0; I <= 4; I++)
    if (A[I] % 2 == 1)
      SOMA += A[I];

  /* Apresentacao das matrizes */

  printf("\nA soma dos elementos equivale a: %4d\n\n", SOMA);
  return 0;
}
