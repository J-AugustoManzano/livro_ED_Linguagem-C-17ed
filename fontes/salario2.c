/* Calculo de Salario */
#include <stdio.h>
int main(void)
{
  float HT, VH, PD, TD, SB, SL;
  printf("Quantas horas de trabalho? "); scanf("%f", &HT);
  printf("Qual o valor da hora? "); scanf("%f", &VH);
  printf("Qual o percentual de desconto? "); scanf("%f", &PD);
  SB = HT * VH;
  TD = (PD/100) * SB;
  SL = SB - TD;
  printf("Salario Bruto ....: %f\n", SB);
  printf("Desconto .........: %f\n", TD);
  printf("Salario liquido ..: %f\n", SL);
  return 0;
}

