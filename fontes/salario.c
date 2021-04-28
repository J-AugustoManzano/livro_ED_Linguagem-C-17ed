/* Calculo de Salario */
#include <stdio.h>
int main(void)
{
  float HT, VH, PD, TD, SB, SL;
  scanf("%f", &HT);
  scanf("%f", &VH);
  scanf("%f", &PD);
  SB = HT * VH;
  TD = (PD/100) * SB;
  SL = SB - TD;
  printf("%f", SB);
  printf("%f", TD);
  printf("%f", SL);
  return 0;
}

