#include <stdio.h>

/* imprime a tabela Celsius para Fahrenheint
 */
 
 int main (void){
	int fahr, celsius;
	int inicio, fim, incr;
	
	inicio = 0;
	fim = 300;
	incr = 20;
	celsius = inicio;
	
	printf("-----------------------------------\n");
	printf("TABELA DE CONVERSÃO DE TEMPERATURAS\n");
	printf("-----------------------------------\n");
	printf("CELSIUS\t\tFAHRENHEINT\n");
	
	while (celsius <= fim) {
	fahr = (9 * celsius) / 5 + 32;
	printf ("%d\t\t\t%d\n", celsius, fahr);
	celsius = celsius + incr;
	}
	printf("-----------------------------------\n");
	return 0;
 } 
