/* P2.c */
/* Vinícius Augusto de Oliveira */
/* 11811EEL004 */

#include <stdio.h>
int bindec(char binario[])
{
	char bininv[256];
	int i, j, x, z, y=0, res=1;
	for(i=0; binario[i]!= '\0' ; i++);
	x = i - 1;
	for(j=0; j <= (i-1); j++)
	{  	bininv[j] = binario[x];
		x--;}
	x=0;	
	for (x = 0; x<=(i-1); x++)
	{
		if(bininv[x] == '0' && x==0)
		{	res = 0;
			y = res;}
		if(bininv[x] == '1' && x==0)
			{res = 1;
			y = res;}
		if(bininv[x] == '1' && x!=0)
		{	
			res=1;
			for(z=0; z<x; z++)
			{res *= 2;}
			y = y + res ;
		}		
		if(bininv[x] == '0' && x!=0) 
		{y = y + (res*0);	}
	
	}
	return y;
}
int binhex(char binario[])
{
	int hex;
	hex = bindec(binario);
	printf ("%x", hex);
	}
int decbin(int decimal)
{
	int i, x=0;
	for(i=31;i>=0;i--)
	{
		x = decimal >> i;
		if(x & 1)
		{	 printf("1");}
		else {printf ("0");}
	}
}
int main ()
{	char binario[256];
	char hexa[256];
	int hex, octa;
	int decimal;
	int opc;
do {
	printf ("\n Escolha uma das opcoes a seguir: ");
	printf ("\n 1 - Binario -> Decimal"); 
	printf ("\n 2 - Binario -> Hexadecimal"); 
	printf ("\n 3 - Hexadecimal -> Decimal");
	printf ("\n 4 - Hexadecimal -> Binario"); 
	printf ("\n 5 - Decimal -> Binario");
	printf ("\n 6 - Decimal -> Hexadecimal"); 
	printf ("\n 7 - Octal -> Decimal");
	printf ("\n\n Digite sua opcao: ");	
	scanf ("%d", &opc);
	switch(opc)
	        {   case 1:
					printf("\n Digite o numero binario: ");
					scanf("%s", binario);
					decimal = bindec(binario);
					printf("\n Em decimal eh: %d", decimal);
	                break;
				case 2:
				 	printf("\n Digite o numero binario: ");
				 	scanf("%s", binario);
				 	printf ("\n Em hexadecimal eh: ");
				 	binhex(binario);			 	
	                break;
	            case 3:
	            	printf("\n Digite o numero hexadecimal: ");
	            	scanf("%x", &hex);
	            	printf("\n Em decimal eh: %d", hex);
	            	break;
	            case 4:
	            	printf("\n Digite o numero hexadecimal: ");
	            	scanf("%x", &hex);
	            	decbin(hex);
	            	break;
	            case 5:
	                printf("\n Digite o numero decimal: ");
				 	scanf("%d", &decimal);
				 	printf ("\n Em binario eh: ");
				 	decbin(decimal);
				 	break;
	            case 6:
	                printf("\n Digite o numero decimal: ");
				 	scanf("%d", &decimal);
				 	printf ("\n Em hexadecimal eh: %x", decimal);
				 	break;
				case 7:
					printf("\n Digite o numero octal: ");
	            	scanf("%o", &octa);
	            	printf("\n Em decimal eh: %d", octa);
	            	break;	                
	            default:
	                printf("\n Invalido");
	        }
	} while (opc == 0);
} 
