/*converter binario em decimal = inverter e multiplicar cada um por 2 (elevado pela posição)
+ pesquisar strlen (para desobrir tamanho de strings)*/

#include<stdio.h>

int strlen(char *str)
{
    int total=0;
    while( str[total] != '\0')
        total++;
    return total;
}

int main(){
	char num[33], binario[33];
	int i;
	
	printf("Insira um numero de base binaria: \n");
	gets(num);
	
}