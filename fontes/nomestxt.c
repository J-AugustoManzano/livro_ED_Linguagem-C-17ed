/* Programa: Nomes em um arquivo texto */

#include <stdio.h>
#include "crt.h"

char NOME[41], TECLA;
FILE *PTRARQ;

void criar(void);
void cadastrar(void);
void exibir(void);

int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 4)
    {
      clear();
      position( 1,33); printf("Menu Principal");
      position( 2,33); printf("--------------");
      position( 5,29); printf("1 ....... Cria arquivo");
      position( 6,29); printf("2 .. Cadastra registro");
      position( 7,29); printf("3 .... Exibe registros");
      position( 8,29); printf("4 ................ Fim");
      position(11,29); printf("Escolha a sua opcao: ");
      fflush(stdin); scanf("%d", &OPCAO);
      if (OPCAO != 4)
        {
          switch (OPCAO)
            {
              case 1  : criar();     break;
              case 2  : cadastrar(); break;
              case 3  : exibir();    break;
              default : printf("Opcao invalidade - Tecle <Enter>");
                        fflush(stdin);
                        while ((TECLA = getchar()) != '\r')
                        break;
             }
        }
    }
  return 0;
}

void criar(void)
{
  clear();
  position( 1,31); printf("Criacao de Arquivo");
  PTRARQ = fopen("NOMESTXT.DAT", "w");
  position(12,31); printf("Arquivo foi criado");
  fclose(PTRARQ);
  position(24,25); printf("Tecle <Enter> para voltar ao menu");
  fflush(stdin); while ((TECLA = getchar()) != '\r')
  return;
}

void cadastrar(void)
{
  clear();
  position( 1,27); printf("Cadastramento de Registro");
  PTRARQ = fopen("NOMESTXT.DAT", "a");
  position( 5,10); printf("Entre o Nome .........: ");
  fflush(stdin); fgets(NOME, 41, stdin);
  fputs(NOME, PTRARQ);
  fputs("\n", PTRARQ);
  fclose(PTRARQ);
  position(24,25); printf("Tecle <Enter> para voltar ao menu");
  fflush(stdin); while ((TECLA = getchar()) != '\r')
  return;
}

void exibir(void)
{
  int LINHA = 5;
  clear();
  position( 1,27); printf("Apresentacao de Registros");
  PTRARQ = fopen("NOMESTXT.DAT", "r");
  while (fgets(NOME, 40, PTRARQ) != NULL)
    {
      position(LINHA, 5);
      printf("%s", NOME);
      LINHA += 1;
    }
  fclose(PTRARQ);
  position(24,25); printf("Tecle <Enter> para voltar ao menu");
  fflush(stdin); while ((TECLA = getchar()) != '\r')
  return;
}
