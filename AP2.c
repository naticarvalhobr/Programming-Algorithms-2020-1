// Nome: Natália Carvalho Barros	Matrícula: UC20100753

// Síntese
// Objetivo: verificar qual tipo de processo mais demandado na área jurídica. 
// Entrada : nome do responsável pela pesquisa e das partes, idade dos respondentes,
// e tipo dos processos. 
// Saída   : nome do pesquisador, total de processos abertos, qtd de abertura por tipo, 
// verificação do tipo mais demandado, média das idades, maior idade inserida e nomes das partes.
	
#include <stdio.h> //Bibliotecas
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

void cadastro (char responsavel[], int *qtdProcessos, char nomeReu[][50], char nomeAutor[][50], char nomeJuiz[][50], int idades[]);
void votos (int qtdProcessos);
int calcMaior (int idades [], int qtdProcessos);
int calcMedia (int idades [], int qtdProcessos);
void listagem (char responsavel[], int qtdProcessos, int idades[], char nomeReu[][50], char nomeJuiz[][50], char nomeAutor[][50]);
void consulta (int qtdProcessos, char nomeReu[][50], char nomeJuiz[][50], char nomeAutor[][50]);

int main(){ //Função Principal

	setlocale(LC_ALL,"Portuguese"); 
	char responsavel[50];
	char nomeReu[10][50], nomeAutor[10][50], nomeJuiz[10][50];
	int opcao, idades[50], qtdProcessos = 0;

	do{
		printf("\n** MENU **\n");
		printf("\n1. Cadastro");
		printf("\n2. Votos");
		printf("\n3. Listagem");
		printf("\n4. Consulta");
		printf("\n5. Sair");
		printf("\nDigite sua opção: ");
		scanf("%i", &opcao);
		
		switch(opcao){
		case 1:
			cadastro (responsavel, &qtdProcessos, nomeReu, nomeAutor, nomeJuiz, idades);
			break;
		case 2:
			votos (qtdProcessos);
			break;
		case 3:
			listagem (responsavel, qtdProcessos, idades, nomeReu, nomeJuiz, nomeAutor);
			break;
		case 4:
			consulta (qtdProcessos, nomeReu, nomeJuiz, nomeAutor);
			break;
		}
		system("cls");
	} while (opcao != 5);
	
getch();
return 0;
}

void cadastro (char responsavel[], int *qtdProcessos, char nomeReu[][50], char nomeAutor[][50], char nomeJuiz[][50], int idades[]){
	char controle;
	
	if ((*qtdProcessos == 0)){
		do{
			printf("\nPrimeiro nome do responsável pela pesquisa: ");
			fflush(stdin);
			gets(responsavel);
			if (strcmp(responsavel,"")==0){
		    	printf("\nNome do responsável não pode estar vazio. Insira novamente. ");
		    }
		} while (strcmp(responsavel,"")==0);
	}
	
	do{
		do{	
			printf("\nNome do autor do processo %i: ", (*qtdProcessos)+1);
			fflush(stdin);
			gets(nomeAutor[(*qtdProcessos)]);
			if (strcmp(nomeAutor[(*qtdProcessos)],"")==0){
			    printf("\nNome do autor não pode estar vazio. Insira novamente. ");
			}
		} while (strcmp(nomeAutor[(*qtdProcessos)],"")==0);
		
		do{	
			printf("\nNome do réu do processo %i: ", (*qtdProcessos)+1);
			fflush(stdin);
			gets(nomeReu[(*qtdProcessos)]);
			if (strcmp(nomeReu[(*qtdProcessos)],"")==0){
			    printf("\nNome do réu não pode estar vazio. Insira novamente. ");
			}
		} while (strcmp(nomeReu[(*qtdProcessos)],"")==0);
		
		do{	
			printf("\nNome do juiz do processo %i: ", (*qtdProcessos)+1);
			fflush(stdin);
			gets(nomeJuiz[(*qtdProcessos)]);
			if (strcmp(nomeJuiz[(*qtdProcessos)],"")==0){
			    printf("\nNome do juiz não pode estar vazio. Insira novamente. ");
			}
		} while (strcmp(nomeJuiz[(*qtdProcessos)],"")==0);
	
		do{
			printf("\nIdade do respondente no processo %i: ", (*qtdProcessos)+1);
			scanf("%d", &idades[(*qtdProcessos)]);
			fflush(stdin);
			if (idades[(*qtdProcessos)] < 0){
				printf("\nIdade não pode ser menor que 0.");
			}
		} while (idades[(*qtdProcessos)] < 0);
		
		(*qtdProcessos)++;
		
		do{
			printf("\nDeseja abrir um novo processo?(S/N) ");
			scanf("%c", &controle);
			fflush(stdin);
			controle = toupper(controle);
			if ((controle != 'S') && (controle != 'N')){
				printf("\nOpção inválida. Digite novamente.");
			}
			if (((*qtdProcessos) <= 4) && (controle == 'N')){
				printf("\nA quantidade de processos deve ser maior que 4. Abra outro processo.");
			}
		} while ((controle != 'S') && (controle != 'N'));
	} while ((controle == 'S') || (*qtdProcessos) <= 4);
	printf("\nPressione qualquer tecla para continuar.");	
	getch();
}

void votos (int qtdProcessos){
	int contC = 0, contA = 0, contE = 0, i;
	char tipoProcesso;
	 
	printf("\n**Opções de processo:**");
	printf("\nC - Conhecimento");
	printf("\nA - Cautelar");
	printf("\nE - Execução");
		
	for (i=0; i<=qtdProcessos-1; i++){		
		do {
			printf("\nIndique o tipo do processo %i: ", i+1);
			fflush(stdin);
			scanf("%c", &tipoProcesso);
			tipoProcesso = toupper(tipoProcesso);
			if ((tipoProcesso != 'C') && (tipoProcesso != 'A') && (tipoProcesso != 'E')){
				printf("\nTipo de processo inválido. Insira novamente.");
			}
		} while ((tipoProcesso != 'C') && (tipoProcesso != 'A') && (tipoProcesso != 'E'));
			
		switch(tipoProcesso){
			case 'C':
				contC++;
				break;
			case 'A':
				contA++;
				break;
			case 'E':
				contE++;
				break;
		}
	}
	
	printf("\nQtd total de processos: %i", qtdProcessos);
	printf("\nQtd de processos abertos do tipo Conhecimento: %i", contC);
	printf("\nQtd de processos abertos do tipo Cautela: %i", contA);
	printf("\nQtd de processos abertos do tipo Execução: %i", contE);
		
	if ((contC > contA) && (contC > contE)){
		printf("\nO processo mais demandado foi o de Conhecimento.");
	} else 
	if ((contA > contC) && (contA > contE)){
		printf("\nO processo mais demandado foi o de Cautelar.");
	} else 
	if ((contE > contC) && (contE > contA)){
		printf("\nO processo mais demandado foi o de Execução.");
	} else
	if ((contC == contA) && (contC > contE)){
		printf("\nNão foi possível determinar um processo, pois pelo menos 2 deles empataram.");
	} else
	if ((contC == contE) && (contC > contA)){
		printf("\nNão foi possível determinar um processo, pois pelo menos 2 deles empataram.");
	} else
	if ((contA == contE) && (contA > contC)){
		printf("\nNão foi possível determinar um processo, pois pelo menos 2 deles empataram.");
	} else 
	if ((contC == contA) && (contC == contE) && (contA == contE)){
		printf("\nNão foi possível determinar um processo, pois pelo menos 2 deles empataram.");
	}
	printf("\nPressione qualquer tecla para continuar.");
	getch();
}

int calcMaior (int idades [], int qtdProcessos){
	int maior, i;
	maior = idades[0];

	for (i=1; i<=qtdProcessos-1; i++){ 
		if(idades[i] > maior){
				maior = idades[i];
		} 
	}
	return maior;
}

int calcMedia (int idades [], int qtdProcessos){
	int somaIdades=0, i, mediaIdades;
	
	for (i=0; i<=qtdProcessos-1; i++){
		somaIdades = somaIdades + idades[i];
	}
	
	mediaIdades = somaIdades / qtdProcessos;
	return mediaIdades;
}

void listagem (char responsavel[], int qtdProcessos, int idades[], char nomeReu[][50], char nomeJuiz[][50], char nomeAutor[][50]){
	int media, idadeMaior, i;
	
	printf("\nNome do pesquisador Responsável: %s", responsavel);
	media = calcMedia (idades, qtdProcessos);
	printf("\nMédia das idades da população: %i", media);
	idadeMaior = calcMaior (idades, qtdProcessos);
	printf("\nA idade mais velha inserida foi de %i anos, na seguintes posições: ", idadeMaior);
	for (i=0; i<=qtdProcessos-1; i++){
		if(idades[i] == idadeMaior){
		printf("\n%i", i+1);	
		} 
	}
	printf("\nImpressão da lista numerada dos nomes das partes: ");
	printf("\nProcesso     Reu          Juiz         Autor");
	for (i=0; i<=qtdProcessos-1; i++){
		printf("\n%i %18s %13s %13s\n", i+1, nomeReu[i], nomeJuiz[i], nomeAutor[i]);
	}
	printf("\nPressione qualquer tecla para continuar.");
	getch();
}

void consulta (int qtdProcessos, char nomeReu[][50], char nomeJuiz[][50], char nomeAutor[][50]){
	int aux = 0, i;
	char chave [50];
	
	printf("\nInforme o nome que deseja pesquisar: ");
	fflush(stdin);
	gets(chave);

	for (i=0; i<=qtdProcessos-1; i++){
		if(stricmp(chave, nomeReu[i]) == 0 || stricmp(chave, nomeJuiz[i]) == 0 || stricmp(chave, nomeAutor[i]) == 0){
			printf("\n%s foi encontrado no processo %i!", chave, i+1); 
			aux = 1;
			printf("\nPressione qualquer tecla para continuar.");
			getch();	
			return;
		}	
	}

	if (aux == 0){ 		
		printf("\n%s não foi encontrada!", chave);
	}
	printf("\nPressione qualquer tecla para continuar.");
	getch();	
}
