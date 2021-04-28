/* Definicao de Funcoes ANSI */

#include <stdio.h>

void clear(void);
void position(int LINE, int ROW);

/* Teste das Funcoes Definidas */

int main(void)
{
  char TECLA;
  clear();
  position(12,23); /* Escreve na linha 12 coluna 23 */
  printf("Teste de Limpeza e Posicionamento");
  position(23, 1);
  return 0;
}

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
