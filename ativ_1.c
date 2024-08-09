#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, *p;
	
	p = vetor;
	printf ("P: %x", p++);
	
	p = vetor;
	printf ("\nP: %d", (*p)++);
	
	p = vetor;
	printf ("\nP: %d", *(p++));
	
	p = vetor;
	printf ("\nP: %d", *(p + 10));
	
	return 0;
}
