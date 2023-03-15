/* 2- Escreva uma versão alternativa de comprime (s1, s2) que remova cada caractere de s1 que se case a algum caractere presente na string s2.
*/
#include <stdio.h>

void comprime(char s1[], char s2[]){
  
  int i, j, k;
  int instr2 = 0;

  for(i = j = 0; s1[i] != '\0'; i++)
  {
    instr2 = 0;
    
    
    for(k = 0; s2[k] != '\0' && !instr2; k++)
    {
      if(s2[k] == s1[i])
      {
        instr2 = 1;
      }
    } 

    if(!instr2)
    {
      s1[j++] = s1[i];
    } 
  }
  s1[j] = '\0';
}


int main(){
char corte [] = "teste";
char base [] = "es";
comprime(corte,base);
printf("%s",corte);

}

