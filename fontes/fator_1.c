/* Fatorial sem retorno de valor */

#include <stdio.h>

void fatorial(int N);

int main(void)
{
  int LIMITE;
  char TECLA;
  printf("Calculo de fatorial\n\n");
  printf("Qual fatorial: ");
  fflush(stdin); scanf("%d", &LIMITE);
  fatorial(LIMITE);
  printf("\nTecle <Enter> para finalizar: ");
  getchar() + scanf("Enter");
  return 0;
}

void fatorial(int N)
{
  int I, FAT;
  FAT = 1;
  for (I = 1; I <= N; I ++)
    FAT *= I;
  printf("\nFatorial de %d = a: %d\n", N, FAT);
  return;
}
