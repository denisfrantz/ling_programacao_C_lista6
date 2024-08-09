#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[] = {4, 9, 12}, i, *p;
	
	p = vetor;
	
	for (i = 0; i < 3; i++)
		printf ("%d ", *p++);

	return 0;
}
