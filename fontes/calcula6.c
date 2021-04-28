/* Programa Calculadora – Windows API */

#include <stdio.h>
#include "crtw.h"

float R, A, B;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);
void entrada(void);
void saida(void);
float calculo(float X, float Y, char OPERADOR);

int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      clear();
      position( 1, 1); printf("Menu Principal");
      position( 2, 1); printf("--------------");
      position( 4, 1); printf("1 - Adicao");
      position( 5, 1); printf("2 - Subtracao");
      position( 6, 1); printf("3 - Multiplicacao");
      position( 7, 1); printf("4 - Divisao");
      position( 8, 1); printf("5 - Fim de Programa");
      position(10, 1); printf("Escolha uma opcao: ");
      fflush(stdin); scanf("%d", &OPCAO);
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case 1  : rotadicao();        break;
              case 2  : rotsubtracao();     break;
              case 3  : rotmultiplicacao(); break;
              case 4  : rotdivisao();       break;
              default : printf("Opcao invalida - Tecle <Enter>");
                        getchar() + scanf("Enter");
                        break;
            }
        }
    }
  return 0;
}

void entrada(void)
{
  position( 5, 1); printf("Entre um valor para A: ");
  fflush(stdin); scanf("%f", &A);
  position( 6, 1); printf("Entre um valor para B: ");
  fflush(stdin); scanf("%f", &B);
  return;
}

void saida(void)
{
  position( 9, 1); printf("\nO resultado entre A e B = %6.2f\n", R);
  position(11, 1);
  printf("\nTecle <Enter> para acessar o menu: ");
  getchar() + scanf("Enter");
  return;
}

float calculo(float X, float Y, char OPERADOR)
{
  float RESULTADO;
  switch (OPERADOR)
    {
      case '+' : RESULTADO = X + Y; break;
      case '-' : RESULTADO = X - Y; break;
      case '*' : RESULTADO = X * Y; break;
      case '/' : RESULTADO = X / Y; break;
    }
  return RESULTADO;
}

int rotadicao(void)
{
  clear();
  position( 1, 1); printf("Rotina de Soma");
  position( 2, 1); printf("--------------");
  entrada();
  R = calculo(A, B, '+');
  saida();
  return 0;
}

int rotsubtracao(void)
{
  clear();
  position( 1, 1); printf("Rotina de Subtracao");
  position( 2, 1); printf("-------------------");
  entrada();
  R = calculo(A, B, '-');
  saida();
  return 0;
}

int rotmultiplicacao(void)
{
  clear();
  position( 1, 1); printf("Rotina de Multiplicacao");
  position( 2, 1); printf("-----------------------");
  entrada();
  R = calculo(A, B, '*');
  saida();
  return 0;
}

int rotdivisao(void)
{
  clear();
  position( 1, 1); printf("Rotina de Divisao");
  position( 2, 1); printf("-----------------");
  entrada();
  if (B == 0)
    {
      position( 9, 1); printf("Erro de divisao");
      position(11, 1);
      printf("\nTecle <Enter> para acessar o menu: ");
      getchar() + scanf("Enter");
    }
  else
    {
      R = calculo(A, B, '/');
      saida();
    }
  return 0;
}
