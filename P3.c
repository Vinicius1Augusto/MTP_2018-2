/* P3.c */
/* Vinícius Augusto de Oliveira */
/* 11811EEL004 */

#include <stdio.h>

void converter(int v[], char s[])
{
	int i, num=0, n;
	for(i=0; s[i] != '\0';i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		v[i] = s[i] - '0';
	}
	n=i;
	for(i=0; i<n; i++)
	{	if(s[i] >= '0' && s[i] <= '9')
	num = num*10 + v[i];}
	
	printf("\nO numero eh: %d", num);
	}

int main()
{
	char s[256];
	int v[256];
	printf("Digite algo: ");
	scanf("%s", s);
	converter(v,s);
	return 0;
}
