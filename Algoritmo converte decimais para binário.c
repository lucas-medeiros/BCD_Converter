/*algoritmo para converter decimais em binario*/

#include<stdio.h>

int main() {
	int num, i;
	int resto, x = 0;
	char binario[33];

	printf("Insira um numero inteiro de base decimal: \n");
	scanf("%d", &num); fflush(stdin);

	while (num > 0)
	{
		binario[x] = (num % 2 == 0) ? '0' : '1';
		x = x++;
		num = (num / 2);
	}

	binario[x] = '\0';

	printf("Seu numero em binario: \n\n");

	for (i = x; i > -1; i--)
	{
		printf("%c", binario[i]);
	}
	printf("\n");

	return 0;

}

/*converter binario em decimal = inverter e multiplicar cada um por 2 (elevado pela posição)
+ pesquisar strlen (para desobrir tamanho de strings)*/