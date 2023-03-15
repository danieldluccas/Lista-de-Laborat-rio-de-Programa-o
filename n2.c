#include <stdio.h>

// 2 - Escreva um programa que copie sua entrada na saída, trocando cada cadeia de dois ou mais espaços por um único espaço.

int main (void){
	
int c = 0;
int espaco = 0;					//variavel de controle para saber se encontrou ' ' ou não

while ((c = getchar()) != EOF){ 
		if (c != ' '){			//se c é igual a algum caractere diferente de ' ', então espaco = desligado
			putchar(c);
			espaco = 0;
		}			
		
		else if(c == ' '){		//se c for igual a espaco, confere a variavel de controle 
			if (espaco == 1){	//se espaco for igual a 1, ou seja, outro espaco, nao faz nada ate que espaco seja 0
			}
			else{				//se for o primeiro espaco depois de uma cadeia de caracteres, aciona variável de controle
				espaco = 1;		//e imprime a saída igual a entrada
				putchar(c);
			}
		}
}		
return 0;		
}
