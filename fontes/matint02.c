/* Arquivo com Matriz */

#include <stdio.h>

int main(void)
{
  int I, A[10];
  FILE *PTRARQ;
  PTRARQ = fopen("MATINT.DBC", "rb");
  fread(A, sizeof(A), 1, PTRARQ);
  I = 0;
  while (I < 10)
    {
      printf("\nO elemento %2d equivale a %2d: ", I + 1, A[I]);
      I += 1;
    }
  fclose(PTRARQ);
  return 0;
}
