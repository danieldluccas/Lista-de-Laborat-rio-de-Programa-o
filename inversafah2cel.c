#include <stdio.h>

/* imprime a tabela Fahrenheint para Celsius do maior para o menor
*/
 
 int main (void){
	int fahr, celsius;
	int inicio, fim, incr;
	
	inicio = 0;
	fim = 300;
	incr = 20;
	fahr = fim;
	
	printf("-----------------------------------\n");
	printf("TABELA DE CONVERSÃO DE TEMPERATURAS\n");
	printf("-----------------------------------\n");
	printf("FAHRENHEINT\t\tCELSIUS\n");
	
	while (fahr >= inicio) {
	celsius = 5 * (fahr -32) / 9;
	printf ("%d\t\t\t%d\n", fahr, celsius);
	fahr = fahr - incr;
	}
	printf("-----------------------------------\n");
	return 0;
 } 
