/* Looping do tipo Do...While Versao 2B */
#include <stdio.h>
int main(void)
{
  int A, B, R, RESP = 1;
  do
    {
      printf("\n\nEntre um valor para A: "); scanf("%d", &A);
      printf("Entre um valor para B: "); scanf("%d", &B);
      R = A + B;
      printf("\nO resultado corresponde a: %d", R);
      printf("\n\nDeseja continuar?");
      printf("\nTecle [1] para SIM / [2] para NAO: ");
      scanf("%d", &RESP);
    }
  while (RESP == 1);
  return 0;
}
