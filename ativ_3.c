#include <stdio.h>
#include <stdlib.h>
int main()
{
	float vetor[5] = {1.1, 2.2, 3.3, 4.4, 5.5}, *f;
    int i;
             
	f = vetor;
	
    printf ("contador/valor/valor/endereco/endereco\n");
    for (i = 0 ; i <= 4 ; i++)
    {
    	printf ("\ni = %d",i);
        printf ("   vet[%d] = %.1f", i, vetor[i]);
        printf ("   *(f + %d) = %.1f", i, *(f+i));
        printf ("   &vet[%d] = %X", i, &vetor[i]);
        printf ("   (f + %d) = %X", i, f+i);
	}


	return 0;
}
