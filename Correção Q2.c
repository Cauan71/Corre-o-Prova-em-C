#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	float num;
	float soma=0, media=0;
	int positivo, contador=0;
	
	
	
	do{
	printf("Digite um n�mero: ");
		scanf("%f",&num);
		
		if(num>=0){
			positivo = num;
			contador++;
			
			soma+=positivo;
		}
	
	}while(num >= 0);
	
	media = soma/contador;
	
	printf("\nSoma dos N�meros Positivos: %.1f",soma);
	printf("\nM�dia dos N�meros Positivos: %.1f",media);
	
	
	return 0 ;
}
