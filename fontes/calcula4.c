/* Programa Calculadora */

#include <stdio.h>

char TECLA;
float R, A, B;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);
void antrada(void);
void saida(void);
float calculo(float X, float Y, char OPERADOR);

int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      printf("\n\nMenu Principal\n");
      printf("--------------\n\n");
      printf("1 - Adicao\n");
      printf("2 - Subtracao\n");
      printf("3 - Multiplicacao\n");
      printf("4 - Divisao\n");
      printf("5 - Fim de Programa\n\n");
      printf("Escolha uma opcao: "); fflush(stdin); scanf("%d", &OPCAO);
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
  printf("Entre um valor para A: ");
  fflush(stdin); scanf("%f", &A);
  printf("Entre um valor para B: ");
  fflush(stdin); scanf("%f", &B);
  return;
}

void saida(void)
{
  printf("\nO resultado entre A e B = %6.2f\n", R);
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
  printf("\n\nRotina de Soma\n");
  printf("--------------\n\n");
  entrada();
  R = calculo(A, B, '+');
  saida();
  return 0;
}

int rotsubtracao(void)
{
  printf("\n\nRotina de Subtracao\n");
  printf("-------------------\n\n");
  entrada();
  R = calculo(A, B, '-');
  saida();
  return 0;
}

int rotmultiplicacao(void)
{
  printf("\n\nRotina de Multiplicacao\n");
  printf("-----------------------\n\n");
  entrada();
  R = calculo(A, B, '*');
  saida();
  return 0;
}

int rotdivisao(void)
{
  printf("\n\nRotina de Divisao\n");
  printf("-----------------\n\n");
  entrada();
  if (B == 0)
    {
      printf("\nErro de divisao\n");
      printf("\nTecle <Enter> para acessar o menu: ");
      getchar() + scanf("Enter");
    }
  else
    {
      R = A / B;
      saida();
    }
  return 0;
}
