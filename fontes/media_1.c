/* Calculo de Media Escolar */
#include <stdio.h>
int main(void)
{
  float MD1, MD2, MD3, MD4, MD5, MD6, MD7, MD8;
  float SOMA, MEDIA;
  SOMA = 0;
  scanf("%f %f %f %f %f %f %f %f",
    &MD1, &MD2, &MD3, &MD4, &MD5, &MD6, &MD7, &MD8);
  SOMA = MD1 + MD2 + MD3 + MD4 + MD5 + MD6 + MD7 + MD8;
  MEDIA = SOMA / 8;
  printf("%6.2f", MEDIA);
  return 0;
}

