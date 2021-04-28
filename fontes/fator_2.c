/* Fatorial com retorno de valor */

#include <stdio.h>

int fatorial(int N);

int main(void)
{
  int LIMITE;
  char TECLA;
  printf("Calculo de fatorial\n\n");
  printf("Qual fatorial: ");
  fflush(stdin); scanf("%d", &LIMITE);
  printf("\nFatorial de %d = a: %d\n", LIMITE, fatorial(LIMITE));
  printf("\nTecle <Enter> para finalizar: ");
  getchar() + scanf("Enter");
  return 0;
}

int fatorial(int N)
{
  int I, FAT;
  FAT = 1;
  for (I = 1; I <= N; I ++)
    FAT *= I;
  return FAT;
}
