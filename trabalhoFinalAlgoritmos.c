#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

#define CIAN "\x1b[1;36m"
#define YELLOW "\x1b[1;33m"
#define RED "\x1b[1;31m"
#define GREEN "\x1b[1;32m"
#define RESET "\x1b[0m"

void gotoxy(int x, int y) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD) {
		x-1,y-1
	});
}

void designCabecalho() {
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|    "CIAN"____ _           "RESET YELLOW" _               _      "RESET"   |  \n");
	printf("\t\t\t\t\t\t\t|   "CIAN"/ ___(_)_ __   ___"RESET YELLOW"| |    _____   _(_)_  __   "RESET"|  \n");
	printf("\t\t\t\t\t\t\t|  "CIAN"| |   | | '_ \\ / _ \\"RESET YELLOW" |   / _ \\ \\ / / \\ \\/ /   "RESET"|\n");
	printf("\t\t\t\t\t\t\t|  "CIAN"| |___| | | | |  __/"RESET YELLOW" |__|  __/\\ V /| |>  <    "RESET"| \n");
	printf("\t\t\t\t\t\t\t|   "CIAN"\\____|_|_| |_|\\___"RESET YELLOW"|_____\\___| \\_/ |_/_/\\_\\   "RESET"| \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------#\n"RESET);

	//8
}

void designTituloMenu() {

	printf("\t\t\t\t\t\t\t|                    M E N U                     | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------#\n");
	printf("\t\t\t\t\t\t\t|                                                | \n");

	//3
}

void designCorpoMenu() {

	printf("\t\t\t\t\t\t\t|               [1]  Cadastro                    | \n");
	printf("\t\t\t\t\t\t\t|               [2]  Poltronas                   | \n");
	printf("\t\t\t\t\t\t\t|               [3]  Reservas                    | \n");
	printf("\t\t\t\t\t\t\t|               [4]  Compras                     | \n");
	printf("\t\t\t\t\t\t\t|               [5]  Cancelar                    | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|              Selecione a opcao:                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//9
}

void designTituloCadastro() {

	printf("\t\t\t\t\t\t\t|                C A D A S T R O                 | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------#\n");
	printf("\t\t\t\t\t\t\t|                                                | \n");

	//3
}

void designCorpoCadastro() {

	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Nome do filme:                                | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas (Min.100|Max.500):                  | \n");
	printf("\t\t\t\t\t\t\t|  Valor do ingresso: R$                         | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//6
}

void designTituloPoltronas() {

	printf("\t\t\t\t\t\t\t|               P O L T R O N A S                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------#\n");
	printf("\t\t\t\t\t\t\t|                                                | \n");

	//3
}

void designCorpoPoltronas() {


	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|  Filme:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Vendas confirmadas: R$                        | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Disponiveis:                        | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Reservadas:                         | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Compradas:                          | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t| +--------------------------------------------+ | \n");
	printf("\t\t\t\t\t\t\t| |                  T E L A                   | | \n");
	printf("\t\t\t\t\t\t\t| +--------------------------------------------+ | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|    Aperte qualquer tecla para volta ao menu.   | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//
}

void designTituloReservas() {

	printf("\t\t\t\t\t\t\t|                R E S E R V A S                 | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------#\n");
	printf("\t\t\t\t\t\t\t|                                                | \n");

	//3
}

void designCorpoReservas() {

	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|  Filme:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Vendas confirmadas: R$                        | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Disponiveis:                        | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Reservadas:                         | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Compradas:                          | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t| +--------------------------------------------+ | \n");
	printf("\t\t\t\t\t\t\t| |                  T E L A                   | | \n");
	printf("\t\t\t\t\t\t\t| +--------------------------------------------+ | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Numero da poltrona:                           | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//
}

void designCorpoCarrinho() {

	printf("\t\t\t\t\t\t\t|                C A R R I N H O                 | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|  Filme:                                        | \n");
//	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//
}

void designCorpoFinalizar() {

	printf("\t\t\t\t\t\t\t|        F I N A L I Z A R   C O M P R A         | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|  Filme:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas:                                    | \n");
	printf("\t\t\t\t\t\t\t|  Idade:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Tipo de Ingresso:                             | \n");
	printf("\t\t\t\t\t\t\t|   - [E] Estudante                              | \n");
	printf("\t\t\t\t\t\t\t|   - [P] PCD                                    | \n");
	printf("\t\t\t\t\t\t\t|   - [I] Idoso                                  | \n");
	printf("\t\t\t\t\t\t\t|   - [D] Doador                                 | \n");
	printf("\t\t\t\t\t\t\t|   - [O] Outro (Integral)                       | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//
}

void designCorpoResumo() {

	printf("\t\t\t\t\t\t\t|         R E S U M O   D A   C O M P R A        | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|  Filme:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas:                                    | \n");
	printf("\t\t\t\t\t\t\t|  Idade:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Tipo de Ingresso:                             | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  TOTAL GERAL: R$                               | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Deseja confirmar a compra? [S]|[N] [ ]        | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//
}

void designTituloCancelar() {

	printf("\t\t\t\t\t\t\t|                C A N C E L A R                 | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------#\n");
	printf("\t\t\t\t\t\t\t|                                                | \n");

	//3
}

void designCorpoCancelar() {

	printf("\t\t\t\t\t\t\t|  Numero da sala: 1                             | \n");
	printf("\t\t\t\t\t\t\t|  Filme:                                        | \n");
	printf("\t\t\t\t\t\t\t|  Vendas confirmadas: R$                        | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Disponiveis:                        | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Reservadas:                         | \n");
	printf("\t\t\t\t\t\t\t|  Poltronas Compradas:                          | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t| +--------------------------------------------+ | \n");
	printf("\t\t\t\t\t\t\t| |                  T E L A                   | | \n");
	printf("\t\t\t\t\t\t\t| +--------------------------------------------+ | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t|  Numero da poltrona:                           | \n");
	printf("\t\t\t\t\t\t\t|                                                | \n");
	printf("\t\t\t\t\t\t\t#------------------------------------------------# \n");

	//
}

void mostraPoltrona(int *codPoltrona, char *status, int poltronasPorSala) {
	int i=0,x=0,y=0,controle=1;

	x = 60;
	y = 25;

	for(i=0; i<poltronasPorSala; i++) {

		if(controle == 1) {

			gotoxy(x, y);

			switch(codPoltrona[i]) {
				case 0:
					printf(GREEN"%c"RESET,status[i]);
					break;
				case 1:
					printf(RED"%c"RESET,status[i]);
					break;
				case 2:
					printf(CIAN"%c"RESET,status[i]);
					break;
				default:
					printf("%c"RESET,"*");
			}
			controle++;

		} else if(controle>1 && controle % 44==0) {

			switch(codPoltrona[i]) {
				case 0:
					printf(GREEN"%c"RESET,status[i]);
					break;
				case 1:
					printf(RED"%c"RESET,status[i]);
					break;
				case 2:
					printf(CIAN"%c"RESET,status[i]);
					break;
			}
			y++;
			controle = 1;
		} else {

			switch(codPoltrona[i]) {
				case 0:
					printf(GREEN"%c"RESET,status[i]);
					break;
				case 1:
					printf(RED"%c"RESET,status[i]);
					break;
				case 2:
					printf(CIAN"%c"RESET,status[i]);
					break;
			}
			controle++;
		}
	}

}

void transformarDisponiveis(int codPoltrona[], char status[]) {
	
	int i;
	for(i = 0; i < 500; i++) { //TRANSFORMAR TODAS AS POLTRONAS EM DISPONÍVEL
		codPoltrona[i] = 0;
		status[i] = 'D';
	}

}


int main() {
	
	int status[500],codPoltrona[500];
		
	int menu,aux=0,i,j,y, x, controle = 1;
	char nomeFilme[100],decisao;
	int poltronasPorSala, numPoltrona[500],selecaoPoltrona,logico=0,erro=0,disponiveis=0,reservadas=0,compradas=0;
	float valorIngresso,valorIngressoMeia;
	int carrinhoPoltronas=0,comprarPoltrona=0,confirmarPoltrona=0,confirmadas=0,invalido=0;
	int idade,idadeAux;
	float valorTotal;
	char tipoIngresso;
	

	//TRANSFORMAR TODAS AS POLTRONAS EM DISPONÍVEL
	transformarDisponiveis(codPoltrona,status);



	do {
		system("cls");
		designCabecalho();
		designTituloMenu();
		designCorpoMenu();

		gotoxy(90,19);
		scanf("%d",&menu);

		switch(menu) {
			case 1: //Cadastro

				system("cls");
				designCabecalho();
				designTituloCadastro();
				designCorpoCadastro();

				gotoxy(75,14);
				fflush(stdin);
				gets(nomeFilme);

				gotoxy(89,15);
				fflush(stdin);
				scanf("%d",&poltronasPorSala);

				disponiveis = poltronasPorSala;

				gotoxy(82,16);
				fflush(stdin);
				scanf("%f",&valorIngresso);

				break;
			case 2: //Poltronas Disponíveis

				system("cls");
				designCabecalho();
				designTituloPoltronas();
				designCorpoPoltronas();
				mostraPoltrona(codPoltrona,status,poltronasPorSala);

				gotoxy(67,13);
				puts(nomeFilme);

				gotoxy(83,16);
				printf("%i",disponiveis);

				gotoxy(82,17);
				printf("%i",reservadas);

				gotoxy(81,18);
				printf("%i",compradas);

				fflush(stdin);
				getchar();



				break;
			case 3: //RESERVA

				do {
					system("cls");
					designCabecalho();
					designTituloReservas();
					designCorpoReservas();
					mostraPoltrona(codPoltrona,status,poltronasPorSala);

					gotoxy(66,13);
					puts(nomeFilme);

					gotoxy(83,16);
					printf("%i",disponiveis);

					gotoxy(82,17);
					printf("%i",reservadas);

					gotoxy(81,18);
					printf("%i",compradas);

					gotoxy(79,40);
					fflush(stdin);
					scanf("%d",&selecaoPoltrona);

					selecaoPoltrona=selecaoPoltrona-1;

					if(codPoltrona[selecaoPoltrona] == 0) {
						codPoltrona[selecaoPoltrona] = 1;
						status[selecaoPoltrona] = 'R';
						reservadas++;
						disponiveis--;
					}

					gotoxy(60,40);
					printf("Reservar outra poltrona? [S]|[N]  [ ] ");
					fflush(stdin);
					gotoxy(95,40);
					scanf("%c",&decisao);
					decisao = toupper(decisao);

					switch(decisao) {
						case 'S':
							logico=1;
							break;

						case 'N':
							logico=0;
							break;

						default:
							logico=1;
							erro=1;
					}

				} while(logico==1);

				break;

			case 4: //COMPRAR

				do { //CARRINHO

					system("cls");
					designCabecalho();
					designCorpoCarrinho();

					gotoxy(66,13);
					puts(nomeFilme);

					do {
						gotoxy(60,17);
						printf("Numero da poltrona RESERVADA:                   ");
						gotoxy(90,17);
						fflush(stdin);
						scanf("%d",&confirmarPoltrona);

						confirmarPoltrona = confirmarPoltrona-1;

						if(codPoltrona[confirmarPoltrona] == 1) {
							codPoltrona[confirmarPoltrona] = 2;
							status[confirmarPoltrona] = 'C';

							compradas++;
							confirmadas++;
							reservadas--;

							carrinhoPoltronas++;
							invalido = 1;
						} else {
							invalido = 0;
						}

						gotoxy(60,17);
						printf("[S]Prosseguir | [N]Adicionar + Poltronas [ ]");
						fflush(stdin);
						gotoxy(102,17);
						scanf("%c",&decisao);
						decisao = toupper(decisao);

						switch(decisao) {
							case 'S':
								logico=0;
								break;

							case 'N':
								logico=1;
								break;

							default:
								logico=1;
								erro=1;
						}
					} while(logico==1);

				} while(logico==1);

				do { //FINALIZAR

					system("cls");
					designCabecalho();
					designCorpoFinalizar();

					gotoxy(66,13);
					puts(nomeFilme);

					gotoxy(71,14);
					printf("%i",carrinhoPoltronas);

					gotoxy(60,25);
					printf("Idade do Cliente:                      ");

					gotoxy(78,25);
					scanf("%i",&idade);
					idadeAux = idade;

					if(idadeAux>12) {

						gotoxy(60,25);
						printf("Tipo de ingresso:                     ");

						gotoxy(78,25);
						scanf("%s",&tipoIngresso);
						tipoIngresso = toupper(tipoIngresso);

						switch(tipoIngresso) {
							case 'E':
								tipoIngresso='E';
								break;
							case 'P':
								tipoIngresso='P';
								break;
							case 'I':
								tipoIngresso='I';
								break;
							case 'D':
								tipoIngresso='D';
								break;
							case 'O':
								tipoIngresso='O';
								break;
							default:
								tipoIngresso='O';

						}

					} else if(idade<=12) {
						tipoIngresso='C';
					}

					gotoxy(60,25);
					printf("[S]Prosseguir | [N]Adicionar + Poltronas [ ]");
					fflush(stdin);
					gotoxy(102,25);
					scanf("%c",&decisao);
					decisao = toupper(decisao);

					switch(decisao) {
						case 'S':
							logico=0;
							break;

						case 'N':
							logico=1;
							break;

						default:
							logico=1;
							erro=1;
					}
				} while(logico==1);

				do { //RESUMO

					system("cls");
					designCabecalho();
					designCorpoResumo();

					gotoxy(67,13);
					puts(nomeFilme);

					gotoxy(71,14);
					printf("%i",carrinhoPoltronas);

					gotoxy(67,15);
					printf("%i",idadeAux);

					gotoxy(78,16);
					switch(tipoIngresso) {
						case 'C':
							printf("[%c] Crianca",tipoIngresso);
							break;
						case 'E':
							printf("[%c] Estudante",tipoIngresso);
							break;
						case 'P':
							printf("[%c] Pessoa com Deficiencia",tipoIngresso);
							break;
						case 'I':
							printf("[%c] Idoso ",tipoIngresso);
							break;
						case 'D':
							printf("[%c] Doador de Sangue",tipoIngresso);
							break;
						case 'O':
							printf("[%c] Outro (Integral)",tipoIngresso);
							break;
					}

					gotoxy(76,18);
					if(tipoIngresso=='C' || tipoIngresso=='E' || tipoIngresso=='P' || tipoIngresso=='I' || tipoIngresso=='D') {
						valorTotal = (confirmadas*valorIngresso)/2;
						printf("%.2f",valorTotal);
					} else if(tipoIngresso=='O') {
						valorTotal = confirmadas*valorIngresso;
						printf("%.2f",valorTotal);
					}



					fflush(stdin);
					gotoxy(96,22);
					scanf("%c",&decisao);
					decisao = toupper(decisao);

					switch(decisao) {
						case 'S':
							logico=0;
							break;

						case 'N':
							logico=1;
							break;

						default:
							logico=1;
							erro=1;
					}
				} while(logico==1);

				break;

			case 5:// CANCELAR RESERVA

				do {
					system("cls");
					designCabecalho();
					designTituloCancelar();
					designCorpoCancelar();
					mostraPoltrona(codPoltrona,status,poltronasPorSala);

					gotoxy(66,13);
					puts(nomeFilme);

					gotoxy(83,16);
					printf("%i",disponiveis);

					gotoxy(82,17);
					printf("%i",reservadas);

					gotoxy(81,18);
					printf("%i",compradas);

					if(codPoltrona[selecaoPoltrona] == 1) {
						codPoltrona[selecaoPoltrona] = 0;
						status[selecaoPoltrona] = 'D';
						reservadas--;
						disponiveis++;
					}

					fflush(stdin);
					gotoxy(80,40);
					scanf("%c",&decisao);
					decisao = toupper(decisao);

					switch(decisao) {
						case 'S':
							logico=0;
							break;

						case 'N':
							logico=1;
							break;

						default:
							logico=1;
							erro=1;
					}

				} while(logico==1);


				break;
			default:
				aux=1;
		}


	} while(aux!=1);

}
