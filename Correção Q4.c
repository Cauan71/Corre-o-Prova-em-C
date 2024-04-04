#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define NT 4

int main(){
	setlocale(LC_ALL,"");
	
	int aluno[200];
	float notas[NT];
	float soma=0, media=0;
	int i;
	
	printf("Digite o seu Nome: ");
		scanf("%s",&aluno);
		
	for(i=0;i<NT;i++){
		
		printf("Digite a %iª nota: ",i+1);
			scanf("%f",&notas[i]);
			
			soma+= notas[i];
	}
	
	media= soma/i;
	
	system("cls || clear");
	
	printf("\nNome do Aluno: %s",aluno);
	printf("\nNotas :");
	
	for(i=0;i<NT;i++){
			printf("\n %iª Nota: %.1f",i+1,notas[i]);
		}
	
	printf("\n\nSoma das Notas: %.1f",soma);
	printf("\nMédia das Notas: %.1f",media);
	
	if(media>=7){
		printf("\nAprovado!! ");
			
	}else if(media<5){
		printf("\nReprovado!!");
	}else {
		printf("\nEm Recuperação");
		
	}
	
	
	return 0 ;
}
