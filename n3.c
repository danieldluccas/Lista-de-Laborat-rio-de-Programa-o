#include <stdio.h>

/*
3 - Escreva um programa para copiar sua entrada na saída, trocando cada tabulação
por \t, cada retrocesso por \b e cada contrabarra por \\. Isso torna as marcas de tabulação e
retrocessos visíveis de forma não ambígua.
*/
int main (void){
int c = 0;


while ((c = getchar()) != EOF ){
		if (c == '\t'){			//se '\t' (tabulação), imprime \t no lugar da tabulação
			putchar(92);		// 92 em decimal é contra barra em ascii '\'
			putchar('t');
		}			
		
		else if (c == 0x08){ 	//se '\b' (backspace), imprime \b.
								//só consegui imprimir o backspace utilizando o ctrl+h no terminal
			putchar(92);
			putchar('b');
			
		}
		else if (c == 92){		//se '\' (contrabarra), imprime '\\'
			putchar(92);
			putchar(92);
		}
		else {
			putchar(c);
		}
		
}		
return 0;		
}
