#include <stdio.h>

/*2- Escreva um programa para imprimir a tabela correspondente de Celsius a Fahre-
nheit. (exerc. 1.4) 

imprime a tabela fahrenheint para Celsius
 */
 
 int main (void){
	int fahr, celsius;
	int inicio, fim, incr;
	
	inicio = 0;
	fim = 300;
	incr = 20;
	fahr = inicio;
	
	printf("-----------------------------------\n");
	printf("TABELA DE CONVERSÃO DE TEMPERATURAS\n");
	printf("-----------------------------------\n");
	printf("FAHRENHEINT\t\tCELSIUS\n");
	
	while (fahr <= fim) {
	celsius = 5 * (fahr -32) / 9;
	printf ("%d\t\t\t%d\n", fahr, celsius);
	fahr = fahr + incr;
	}
	printf("-----------------------------------\n");
	return 0;
 } 
