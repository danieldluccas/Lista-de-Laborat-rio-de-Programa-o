/*Escrever um programa que calcule e escreva na tela o milionésimo número número primo, sendo 2 o primeiro primo.
Seu programa deve ser mais eficiente que simplesmente testar se todos os números são divisíveis pelo número candidato
e seu programa deve fornecer a resposta em menos de 20 segundos (numa boa máquina pode ser em menos de 3 segundos).
*/

#include <stdio.h>



int main (void){
	int n = 2;
	int i, composto = 0;
	int teste = 2;							//primeiro numero primo
	float resto = 0;
	double raiz = 0;
	
	
	for(i=1; i<=1000;){
		
		raiz = teste/2;
		while (n <= raiz ){					//n varia até a metade de teste||
			(resto = teste % n);			//teste é primo até que se prove algum divisor com resto = 0
			
			if (resto == 0){ 				//se o resto da divisao for 0
				composto = 1;				//varivavel de numero composto é acionada
			}
			n = n+1;						//incrementa o divisor
		}
		
		
		if (composto == 0) {				//sendo primo
			printf("%d \t é o numero primo N = %d \n", teste,i);				
			i++;							//incrementa posicao de primo
			teste++;						//incrementa numero a ser testado
			n=2;							//retorna divisor para 2
			
		}
		else {								//se nao for primo
			teste++;						//passa para o proximo numero a ser testado
			n=2;							//retorna divisor para 2
			composto = 0;					//retorna a variavel de numero composto para 0
		}
	}	
	//if (composto == 1) {
	//	printf("%d nao é um numero primo" ,teste);
	//		}
	//else {
	//	printf("%d é um numero primo" ,teste);		//não existe divisor, alem de 1 e o proprio numero. logo, é primo	
	//}						
	
return 0;
}
