#include <stdio.h>

// Escreva um programa que conte espaços, caracteres de tabulação e de nova-linha.(exerc 1.8)

int main(void){
	
	int nespaco = 0, ntab = 0, nlinha = 0;
	char c;
	
	while ((c = getchar()) !=EOF)	//ctrl+d = EOF (end of file)
	{
		if ((c ==' ')){
			nespaco = nespaco +1;	//incrementa o contador de espaços
			}
		else if ((c=='\t')){		//incrementa o contador de tabulação
			ntab = ntab +1;
			}
		else if ((c=='\n')){		//incrementa o contador de linha
			nlinha = nlinha +1;
			}
	}
	
	printf ("Quantidade de espacos: %d \n",nespaco);
	printf ("Quantidade de tabulacoes: %d \n",ntab);
	printf ("Quantidade de linhas: %d \n",nlinha);
	return 0;
}
