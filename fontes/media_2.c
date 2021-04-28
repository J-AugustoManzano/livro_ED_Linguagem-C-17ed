/* Calculo de Media : 8 alunos */
#include <stdio.h>
int main(void)
{
  float MD[8];
  float MEDIA, SOMA = 0;
  int I;
  printf("\nCalculo de media escolar\n\n");
  for (I = 0; I <= 7; I++)
    {
      printf("Informe a %da. nota: ", I+1); scanf("%f", &MD[I]);
      SOMA += MD[I];
    }
  MEDIA = SOMA / 8;
  printf("\nA media do grupo equivale a: %6.2f\n\n", MEDIA);
  return 0;
}
