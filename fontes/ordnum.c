/* Passagem de parametro por referencia */

#include <stdio.h>

int troca(int *A, int *B);

int main(void)
{
  int VETOR[9], I, J;
  char TECLA;
  printf("\n\nOrdenacao de vetor\n\n");

  /* Entrada de dados */

  for (I = 0; I <= 9; I++)
    {
      printf("Entre o %2d. elemento: ", I+1);
      fflush(stdin); scanf("%d", &VETOR[I]);
    }

  /* Ordenacao do vetor */

  for (I = 0; I <= 8; I++)
    for (J = I+1; J <= 9; J++)
      troca(&VETOR[I], &VETOR[J]);

  /* Apresentacao do vetor ordenado */

  printf("\n");
  for (I = 0; I <= 9; I++)
    printf("Agora o %2do. elemento e': %d\n", I+1, VETOR[I]);
  printf("\nTecle <Enter> para finalizar: ");
  fflush(stdin); while ((TECLA = getchar()) != '\r')
  return 0;
}

int troca(int *A, int *B)

/* Definicao dos ponteiros que receberao os valores dos vetores */

{
  int X;
  if (*A > *B)
    {
      X  = *A;
      *A = *B;
      *B =  X;
    }
  return 0;
}
