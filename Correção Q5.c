#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 5

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	int i;
	int maiorNumero = 0, menorNumero = 9999;
	
	
	for(i=0;i<SIZE;i++){
		printf("Digite o %iª Número: ",i+1);
			scanf("%i",&num);
			
			if(num<menorNumero){
				menorNumero = num;
				
			}
			if(num>maiorNumero){
				maiorNumero = num;
				
			}
	}
	
	
	printf("\nMaior Número: %i",maiorNumero);
	printf("\nMenor Número: %i",menorNumero);
	
	return 0 ;
}
