/* Codigo da bilbioteca CRTW */

#include <stdio.h>
#include <windows.h>

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

/*****************************************************/
/* Funcao: Limpa Linha a partir da posicao do cursor */
/*****************************************************/

void clearline(void)
{
  HANDLE TELA;
  COORD POS;
  CONSOLE_SCREEN_BUFFER_INFO VIDEO;
  DWORD ESCRITA = 0;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(TELA, &VIDEO);
  POS.Y = VIDEO.dwCursorPosition.Y;
  POS.X = VIDEO.dwCursorPosition.X;
  FillConsoleOutputCharacter(TELA, 32, 80 - POS.X , POS, &ESCRITA);
  return;
}
