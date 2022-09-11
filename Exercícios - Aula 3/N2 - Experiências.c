#include <stdio.h>
#include <string.h>


int main (void)
{

    int testes, coelho = 0, sapo = 0, rato = 0, i, numTeste = 0, total = 0;
    float pcoelho, psapo, prato;
    char letra;

    scanf("%d", &testes);

    for (i = 0; i < testes; i++){
	    scanf("%d %c", &numTeste, &letra);

	    if (letra == 'C' || letra == 'c'){

		    coelho += numTeste;

	    }else if (letra == 'R' || letra == 'r'){

		    rato += numTeste;

	    }else if (letra == 'S' || letra == 's'){

		    sapo += numTeste;

	    }

	    total += numTeste;
    }

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelho);
	printf("Total de ratos: %d\n", rato);
	printf("Total de sapos: %d\n", sapo);

	pcoelho = coelho*100.0/total;
	prato = rato*100.0/total;
	psapo = sapo*100.0/total;


	printf("Percentual de coelhos: %.2f %%\n", pcoelho);
	printf("Percentual de ratos: %.2f %%\n", prato);
	printf("Percentual de sapos: %.2f %%\n", psapo);

    system("PAUSE");
}