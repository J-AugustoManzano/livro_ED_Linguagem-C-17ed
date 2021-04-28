/* Definicao de Funcoes Windows API */

#include <stdio.h>
#include <windows.h>

void clear(void);
void position(int LINE, int ROW);

/* Teste das Funcoes Definidas */

int main(void)
{
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
  HANDLE TELA;
  DWORD ESCRITA = 0;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = 0;
  POS.Y = 0;
  FillConsoleOutputCharacter(TELA, 32, 80 * 25, POS, &ESCRITA);
  return;
}

/****************************/
/* Funcao: Posiciona Cursor */
/****************************/

void position(int LINE, int ROW)
{
  HANDLE TELA;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = ROW - 1;
  POS.Y = LINE - 1;
  SetConsoleCursorPosition(TELA, POS);
  return;
}
