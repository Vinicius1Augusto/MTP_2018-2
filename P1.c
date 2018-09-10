/* P1.c */
/* Vinícius Augusto de Oliveira */
/* 11811EEL004 */

#include <stdio.h>

int main()
{
	char bits[256];
	int estado = 0; int i = 0, x;
	printf("Insira a sequencia binaria desejada: ");  
	scanf("%s", bits);
	for (i=0; bits[i]!='\0'; i++){						
		if (bits[i] == '0' && estado == 0)	x = 0;
		if (bits[i] == '1' && estado == 0)	x = 1;
		if (bits [i] == '0' && estado == 1) x= 2;
		if (bits[i] == '1' && estado == 1)  x = 0;
		if (bits [i] == '0' && estado == 2) x = 1;
		if (bits [i] == '1' && estado == 2) x = 2;
		estado = x;}
	
	if(estado == 0)
	printf (" %s eh multiplo de 3", bits);
	else
	printf ("%s nao eh ", bits);
	return 0;
}
