#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define SIZE 6

int main(){
	setlocale(LC_ALL,"");
	
	int num[SIZE];
	int i;
	int pares=0, impares=0;
	
	for(i=0;i<SIZE;i++){
		printf("Digite o %iª Número: ",i+1);
			scanf("%d",&num[i]);
	
			if(num[i]%2==0){
				pares++;
			}else{
				impares++;
			}
	}
	for(i=0;i<SIZE;i++){
		printf("\n %iª Número: %i",i+1,num[i]);
	}
		printf("\n\n Quantidade de Números Pares: %d",pares);
		printf("\n Quantidade de Números Ímpares: %d",impares);
	
	
	return 0 ;
}

