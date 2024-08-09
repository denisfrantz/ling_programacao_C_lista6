#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[10], i, *p1, *p2;
	
	p2 = &vetor[9];
	
	srand(time(NULL));
	for (i = 0; i < 10; i++)
		vetor[i] = rand()%10;
		
	printf("VETOR\n=====\n");
	for (p1 = vetor; p1 <= p2; p1++)
		printf ("%d ",*p1);
	
	return 0;
}
