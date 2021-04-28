/* Codigo da bilbioteca CRT */

#include <stdio.h>

/**********************/
/* Funcao: Limpa Tela */
/**********************/

void clear(void)
{
  printf("\033[2J");
  return;
}

/****************************/
/* Funcao: Posiciona Cursor */
/****************************/

void position(int LINE, int ROW)
{
  printf("\033[%d;%dH", LINE, ROW);
  return;
}

/*****************************************************/
/* Funcao: Limpa Linha a partir da posicao do cursor */
/*****************************************************/

void clearline(void)
{
  printf("\033[K");
  return;
}
