/* Adiciona Numeros Versao 2 */
#include <stdio.h>
int main(void)
{
  int A, B, X;
  printf("Informe um valor para a variavel A: "); scanf("%d", &A);
  printf("Informe um valor para a variavel B: "); scanf("%d", &B);
  X = A + B;
  printf("\nO resultado equivale a: ");
  if (X >= 10)
    printf("%d", X + 5);
  else
    printf("%d", X - 7);
  return 0;
}

