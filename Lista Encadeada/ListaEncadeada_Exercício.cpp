// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

// Defines
#define TAMANHO 100

// Estruturas -------------------------------------------------------------------
typedef struct DADOS{
	int codigo;
	char nome[TAMANHO];	
};

typedef struct ELEMENTO{
	// Atributos
	DADOS atributos;
	
	ELEMENTO *proximoElemento;
} ELEMENTO;

typedef struct GLOBAL{
	
} GLOBAL;

// Prototipos -------------------------------------------------------------------
void menuPrincipal(GLOBAL *dados);
void menuInserir(GLOBAL *dados);
void menuOrdenar(GLOBAL *dados);

// void lista_inserir_fim(GLOBAL *dados);
// void lista_inserir_ordenado(GLOBAL *dados);
// void lista_inserir_antesDeReferencia(GLOBAL *dados);
// void lista_inserir_depoisDeReferencia(GLOBAL *dados);
 void lista_inserir_inicio(GLOBAL *dados);

// void lista_exibir(GLOBAL *dados);
// void lista_inverter(GLOBAL *dados);
// void lista_ordenar(GLOBAL *dados);

// void elemento_exibir(GLOBAL *dados);

int main (void){
	setlocale(LC_ALL, ""); // Localização
	GLOBAL dados; // Criação da estrutura global
	menuPrincipal(&dados); // Chamada para o Menu Principal
	return 0;
}

// MENUS -----------------------------------------------------------------------
void menuPrincipal(GLOBAL *dados){
	
	char escolhaMenuPrincipal;
	
	system("cls");
	printf ("\n\t == MENU PRINCIPAL == \n\n");
	printf (" 1 - Menu Inserir \n");
	printf (" 2 - Menu Ordenar \n");
	printf (" 3 - Exibir Lista \n");
	printf (" S - Sair \n");
	printf ("\n Escolha: ");
	
	fflush(stdin);
	scanf("%c", &escolhaMenuPrincipal);
	
	switch(escolhaMenuPrincipal){
		case '1':
			menuInserir(dados);
			break;
		case '2':
			menuOrdenar(dados);
			break;
		case '3':
			// Listar
			break;
		case 's':
			exit(0);
			break;
		default:
			printf (" [ ESCOLHA INVÁLIDA ] \n");
			break;
	}
	
	return menuPrincipal(dados);
}

void menuInserir(GLOBAL *dados){
	
	char escolhaMenuInserir;
	
	system("cls");
	printf ("\n\t == MENU INSERIR == \n\n");
	printf (" 1 - Fim \n");
	printf (" 2 - Ordenado \n");
	printf (" 3 - Antes de referência \n");
	printf (" 4 - Depois de referência \n");
	printf (" 5 - Início \n");
	printf (" V - Voltar \n");
	printf ("\n Escolha: ");
	
	fflush(stdin);
	scanf("%c", &escolhaMenuInserir);
	
	switch(escolhaMenuInserir){
		case '1':
			// Inserir Fim
			break;
		case '2':
			// Inserir Ordenado
			break;
		case '3':
			// Inserir antes de referencia
			break;
		case '4':
			// Inserir depois de referencia
			break;
		case '5':
			// Inserir no Inicio
			break;
		case 'v':
			return menuPrincipal(dados);
			break;
		default:
			printf (" [ ESCOLHA INVÁLIDA ] \n");
			break;
	}
	
	system("pause");
	return menuInserir(dados);
}

void menuOrdenar(GLOBAL *dados){
	
	char escolhaMenuOrdenar;
	
	system("cls");
	printf ("\n\t == MENU ORDENAR == \n\n");
	printf (" 1 - Código \n");
	printf (" 2 - Nome \n");
	printf (" 3 - Valor \n");
	printf (" 4 - Inverter Lista \n");
	printf (" V - Voltar \n");
	printf ("\n Escolha: ");
	
	fflush(stdin);
	scanf("%c", &escolhaMenuOrdenar);
	
	switch(escolhaMenuOrdenar){
		case '1':
			// Ordenar por Codigo
			break;
		case '2':
			// Ordenar por Nome
			break;
		case '3':
			// Ordenar por Valor
			break;
		case 'v':
			return menuPrincipal(dados);
			break;
		default:
			printf (" [ ESCOLHA INVÁLIDA ] \n");
			break;
	}
	
	system("pause");
	return menuOrdenar(dados);
}

void lista_inserir_inicio(GLOBAL *dados){
	
}

