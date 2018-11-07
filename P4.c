/* P4.c */
/* Vinícius Augusto de Oliveira */
/* 11811EEL004 */

#include <stdio.h>

int ackermann(int m, int n);

int main()
	{
	int m, n, res;
	printf("\nDigite M: ");
	scanf("%d", &m);
	getchar();
	printf("\nDigite N: ");
	scanf("%d", &n);
	getchar();
	res = ackermann(m,n);
	printf("\nResultado: %d", res);
	}
	
int ackermann(int m, int n)
{
	int resultado;
	if(m==0) 
	{
		return n+1;
	}
	else if(n==0) 
	{
		return ackermann(m-1, 1);
	}
	else
	{
		resultado=ackermann(m-1, ackermann (m, n-1));
		return resultado;
	}
}
