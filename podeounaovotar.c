#include <stdio.h>
#include <stdlib.h>

	main ()
{
	int AT,AN,R;
	
	
	printf("Digite o ano atual: ");
	scanf("%d", &AT);
	printf("Digite o ano de nascimento: ");
	scanf ("%d", &AN);
	
	R = (AT-AN);
	
	
	if (R>=16)
	{
	
		printf("Voce tem %d anos e ja pode votar\n",R);
	}
	
	else
	
	{

	printf("Voce tem %d anos e nao pode votar\n", R);


	}	
	
	system("PAUSE");
	
	
	
}
