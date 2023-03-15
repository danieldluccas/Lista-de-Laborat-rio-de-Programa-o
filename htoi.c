#include<stdio.h>

 int hexToInt(char []);

 int main(){

    char hex[]="0xFf";

     printf("Numero em hexa: %s. Numero em decimal: %d",hex,HexToInt(hex));

 return 0;
 }


 int HexToInt(char arr[]){

    int decimal,length,pow,temppow,base,tempbase,num;
    decimal=length=pow=temppow=num=0;

    for(int i=0;arr[i]!='\0';++i){
		length++;
    }

    pow=length-1;

    for(int i=0;i<length;i++){
        temppow=pow;
        tempbase=16;
        base=1;
        
        while(temppow!=0){
            base=base*tempbase;
            temppow--;
        }
        if(pow==0){
			base=1;
		}
		
        if(arr[i]>='0' && arr[i]<='9'){
            num=arr[i]-'0';
        }
        
        else if(arr[i]>='A' && arr[i]<='F'){
            num=arr[i]-55;
        }
        
        else if(arr[i]>='a' && arr[i]<='f'){
			num=arr[i]-87;
		}
        decimal+=num*base;
        pow--;
    }

 return decimal;
 }
