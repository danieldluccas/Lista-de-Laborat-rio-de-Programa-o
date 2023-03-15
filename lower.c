/*
4-Reescreva a função minúsculo a qual converte letras maiúsculas em minúsculas, com uma expressão condicional no lugar de if-else.
*/

#include <stdio.h>

char lower (char[]);

int main() {
	char string[] = "TESTE De string";
	lower (string);
	printf("%s",string);
	
	}



/* lower: converte caracter maiúsculo para minúsculo em ASCII */
char lower(char c[]){
	
int len;
len = 0;

for (int i=0; c[i]!='\0'; ++i){
	len++;
}

int i;
i=0;
while (i < len){
	while(c[i]>='A' && c[i]<='Z'){
        c[i]=c[i] + 32;
    }	
	i++;
}

return *c;
}
