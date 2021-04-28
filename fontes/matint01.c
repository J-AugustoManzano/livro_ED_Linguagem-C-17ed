/* Matriz com Arquivo */

#include <stdio.h>

int main(void)
{
  int I, A[10];
  FILE *PTRARQ;
  PTRARQ = fopen("MATINT.DBC", "wb");
  I = 0;
  while (I < 10)
    {
      printf("Digite o elemento - %2d: ", I + 1);
      fflush(stdin); scanf("%d", &A[I]);
      I += 1;
    }
  fwrite(A, sizeof(A), 1, PTRARQ);
  fclose(PTRARQ);
  return 0;
}
