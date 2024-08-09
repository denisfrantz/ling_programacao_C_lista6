#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[4][4], B[4][4], C[4][4], i, *pi, *pa, *pb, *pc;
	
	pi = &i;
	pa = &A[0][0];
	pb = &B[0][0];
	pc = &C[0][0];
	
	printf ("ARRAY 1 (4x4)\n=============\n");
	for (*pi = 0; *pi < 16; (*pi)++)
		scanf ("%d", pa++);
		
	printf ("\nARRAY 2 (4x4)\n=============\n");
	for (*pi = 0; *pi < 16; (*pi)++)
		scanf ("%d", pb++);
		
	pa = &A[0][0];
	pb = &B[0][0];
	pc = &C[0][0];
	
	printf ("\nSoma da posicoes: ");	
	for (*pi = 0; *pi < 16; (*pi)++)
	{
		*pc = *pa + *pb;
		printf ("%d  ", *pc);
		pc++;
		pa++;
		pb++;
	}	
	
	return 0;
}
