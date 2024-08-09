#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, *p, *pi;
	
	pi = &i;
	p = vetor;
	
	printf ("ARRAY ORIGINAL\n==============\n");
	for (*pi = 0; *pi < 10; (*pi)++)
	 	printf ("%d ", *(p + *pi));
	 
	printf ("\n\nARRAY INVERTIDO\n===============\n"); 	
	for (*pi = 9; *pi >= 0; (*pi)--)
	 	printf ("%d ", *(p + *pi));

	return 0;
}
