/* Escreve numeros ordenados */
#include <stdio.h>
int main(void)
{
  int NUMERO[5], I, J, X;
  printf("Classificacao de elementos numericos\n\n");

  /* Entrada de dados */

  for (I = 0; I <= 4; I++)
    {
      printf("Informe o %do. valor: ", I+1);
      fflush(stdin); scanf("%d", &NUMERO[I]);
    }

  /* Classificacao */

  for (I = 0; I <= 3; I++)
    for (J = I+1; J <= 4; J++)
      {
        if (NUMERO[I] > NUMERO[J])
          {
            X = NUMERO[I];
	      NUMERO[I] = NUMERO[J];
	      NUMERO[J] = X;
          }
      }

  /* Apresentacao dos dados */

  printf("\n\n");
  for (I = 0; I <= 4; I++)
    printf("Agora o %do. valor e': %3d\n", I+1, NUMERO[I]);
  return 0;
}
