/********************************************************************
 Chamada  de  programas-fontes  externos, adicionados  ao programa no
 processo de compilacao e linkedicao.
 ********************************************************************/

#include <stdio.h>
#include <string.h>
#include "crt.h"

/********************************************************************
 Definicao da estrutura de dados e das variaveis globais.
 ********************************************************************/

struct REG_ALUNO
  {
    int   MATRICULA;
    char  NOME[31];
    float NOTAS[4];
  };

struct REG_ALUNO ALUNO;

FILE   *ARQALU;
int    I, NR_MATRIC;
char   RESP, TECLA;
char   SISTEMA[29] = "PROGRAMA DE CADASTRO ESCOLAR";

/********************************************************************
 Programa principal com o controle de abertura ou criacao  do arquivo
 de dados, e apresentacao do menu principal.
 ********************************************************************/

void line(void);
void center(int LINHA, const char *MENSAGEM);
void clearline(void);
void tela(void);
void mostradados(void);
int pesquisa(int NUMERO);
int cadastra(void);
int consultar(void);

int main(void)
{

  /* Verifica existencia do arquivo, se nao existe, cria */

  char OPCAO;
  if((ARQALU = fopen("CADALU.DAT","rb+")) == NULL)
    {
      ARQALU = fopen("CADALU.DAT","wb+");
      fwrite(&ALUNO, sizeof(struct REG_ALUNO), 1, ARQALU);
    }
  do
    {
      clear();
      line();
      center( 2, SISTEMA);
      center( 3, "Menu de Opcoes\n");
      line();
      position( 9,26); printf("Cadastrar .............: [1]");
      position(11,26); printf("Consultar .............: [2]");
      position(13,26); printf("Finalizar .............: [3]");
      position(17,26); printf("Entre com a opcao: --> ");
      scanf("%c", &OPCAO); fflush(stdin);
      switch(OPCAO)
        {
          case '1' : cadastra();  break;
          case '2' : consultar(); break;
        }
    }
  while (OPCAO != '3');
  fclose(ARQALU);
  position(23, 1);
  return 0;
}

/********************************************************************
 Funcoes definidas pelo usuario com a finalidade de simplificar o uso
 de algumas instrucoes da linguagem.
 ********************************************************************/

/* Traca uma linha */

void line(void)
{
  int POSICAO;
  for (POSICAO = 0; POSICAO < 80; POSICAO++)
    printf("-");
  return;
}

/* Centraliza uma mensagem no video em uma determinada linha */

void center(int LINHA, const char *MENSAGEM)
{
  int COLUNA;
  COLUNA = ((80 - strlen(MENSAGEM)) / 2);
  position(LINHA, COLUNA);
  printf(MENSAGEM);
  return;
}

/* Apresenta a tela de cadastro e consulta */

void tela(void)
{
  position(10,18); clearline();
  position(11,18); clearline();
  position(12,18); clearline();
  position(13,18); clearline();
  position(14,18); clearline();
  position(15,18); clearline();
  position(10, 1); printf("Matricula ...: ");
  position(11, 1); printf("Nome ........: ");
  position(12, 1); printf("1a. Nota ....: ");
  position(13, 1); printf("2a. Nota ....: ");
  position(14, 1); printf("3a. Nota ....: ");
  position(15, 1); printf("4a. Nota ....: ");
  return;
}

/* Mostra os dados quando da consulta ou tentativa de cadastro */

void mostradados(void)
{
  position(10,18); printf("%d", NR_MATRIC);
  position(11,18); printf("%s", ALUNO.NOME);
  for (I = 0; I < 4; I++)
    {
      position(12 + I,18);
      printf("%5.2f", ALUNO.NOTAS[I]);
    }
  return;
}

/********************************************************************
 Rotina de pesquisa, comum as rotinas de controle do programa.
 ********************************************************************/

int pesquisa(int NUMERO)
{
  int ACHOU = 0;
  rewind(ARQALU);
  while (!feof(ARQALU) && ACHOU != 1)
    {
      fread(&ALUNO, sizeof(struct REG_ALUNO), 1, ARQALU);
      if (NUMERO == ALUNO.MATRICULA)
        ACHOU = 1;
    }
  return(ACHOU);
}

/********************************************************************
 Rotinas de controle do programa principal.
 ********************************************************************/

/* Cadastramento dos dados */

int cadastra(void)
{
  clear();
  line();
  center( 2, SISTEMA);
  center( 3, "Modulo de Cadastramento\n");
  line();
  position( 6, 1); printf("Digite os dados abaixo:");
  do
    {
      position(22, 1); clearline();
      position(23, 1); clearline();
      printf("Digite [0] para voltar ao menu");
      tela();
      position(10,18); fflush(stdin); scanf("%d", &NR_MATRIC);
      position(23, 1); clearline();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC) == 1)
            {

              /* Apresenta os dados caso exista no arquivo */

              mostradados();
              position(22, 1); printf("Este registro ja existe");
              position(23, 1);
              printf("Tecle <Enter> para nova tentativa");
              fflush(stdin);
              while ((TECLA = getchar()) != '\n')
              position(23,33);
            }
          else
            {

              /* Localiza posicao para gravar registro */

              fseek(ARQALU, (long) sizeof(struct REG_ALUNO), 2);

              /* Grava registro */

              position(11,18);
              fflush(stdin);fgets(ALUNO.NOME, 31, stdin);
              for(I = 0; I < 4; I++)
                {
                  position(12 + I,18);
                  fflush(stdin);
                  scanf("%f", &ALUNO.NOTAS[I]);
                }
              ALUNO.MATRICULA = NR_MATRIC;
              fwrite(&ALUNO, sizeof(struct REG_ALUNO), 1, ARQALU);
              position(23, 1);
              printf("Tecle <Enter> para nova tentativa");
              fflush(stdin);
              while ((TECLA = getchar()) != '\n')
              position(23,33);
            }
        }
    }
  while (NR_MATRIC != 0);
  return 0;
}

/* Consulta dos dados */

int consultar(void)
{
  clear();
  line();
  center( 2, SISTEMA);
  center( 3, "Modulo de Consulta\n");
  line();
  position( 6, 1); printf("Digite o numero de matricula:");
  do
    {
      position(22, 1); clearline();
      position(23, 1); clearline();
      printf("Digite [0] para voltar ao menu");
      tela();
      position(10,18); fflush(stdin); scanf("%d", &NR_MATRIC);
      position(23, 1); clearline();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC) == 1)
            {

              /* Apresenta os dados caso exista no arquivo */

              mostradados();
              position(23, 1);
              printf("Tecle <Enter> para nova tentativa");
              fflush(stdin);
              while ((TECLA = getchar()) != '\n')
              position(23,33);
            }
          else
            {
              position(22, 1);
              printf("Este registro nao esta cadastrado");
              position(23, 1);
              printf("Tecle <Enter> para nova tentativa");
              fflush(stdin);
              while ((TECLA = getchar()) != '\n')
              position(23,33);
            }
        }
    }
  while (NR_MATRIC != 0);
  return 0;
}
