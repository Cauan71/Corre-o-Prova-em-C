#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void menu(){
	inicio();
	printf("\n1 - Mostrar Nome e Idade");
	printf("\n2 - Mostrar Nome e Email");
	printf("\n3 - Mostrar Nome e Telefone");
	printf("\n4 - Mostrar todas as Informações");
	printf("\n0 - Sair do Programa");
	
}

void inicio(){
	
	printf("======== M E N U =========");
	
}

int main(){
	setlocale(LC_ALL,"");
	
	int opcao;
	char nome[200],email[200];
	int telefone, idade;
	
	printf("Digite o seu nome: ");
		scanf("%s",&nome);
		
	printf("Digite a sua Idade: ");
		scanf("%i",&idade);
		
	printf("Digite o seu Email: ");
		scanf("%s",&email);
		
	printf("Digite o seu Telefone: ");
		scanf("%i",&telefone);
		
	system("cls || clear");
	
	
	
	menu();
	
	printf("\nEscolha uma opção Desejada: ");
		scanf("%i",&opcao);
		
	system("cls || clear");
	
	switch(opcao){
		
		case 1 :
			inicio();
			printf("\nNome: %s",nome);
			printf("\nIdade: %i",idade);
			
		break;
		
		case 2 :
			inicio();
			printf("\nNome: %s",nome);
			printf("\nEmail: %s",email);
			
		break;
		
		case 3:
			inicio();
			printf("\nNome : %s",nome);
			printf("\nTelefone: %i",telefone);
			
		break;
		
		case 4:
			inicio();
			printf("\nNome: %s",nome);
			printf("\nIdade: %i",idade);
			printf("\nEmail: %s",email);
			printf("\nTelefone: %i",telefone);			
			
		break;
		
		case 0:
			printf("\nFim do Programa");
			
		default:
			printf("Opção Inválida ,Tente Novamente...");
			menu();
			return opcao;
			
		
	}


	return 0 ;
}
