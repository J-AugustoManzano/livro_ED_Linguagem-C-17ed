/* Data calendario por extenso */

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{

  char MES_EXT[][10] =
        {
          "janeiro",
          "fevereiro",
          "marco",
          "abril",
          "maio",
          "junho",
          "julho",
          "agosto",
          "setembro",
          "outubro",
          "novembro",
          "dezembro"
        };
  int DIA, MES, ANO;

  if (argc == 4)
    {

      DIA = atoi(argv[1]);
      MES = atoi(argv[2]);
      ANO = atoi(argv[3]);

      if (DIA < 1 || DIA > 31)
        printf("\nForneca dia entre 1 e 31.");
      else if (MES < 1 || MES > 12)
        printf("\nForneca mes entre 1 e 12.");
      else if (ANO < 1000 || ANO > 9999)
        printf("\nForneca ano entre 1000 e 9999.");
      else
        printf("\n%s de %s de %s", argv[1], MES_EXT[MES-1], argv[3]);
    }
  else
    printf("\nIncorreto: data DD MM AAAA.");

  return;
}
