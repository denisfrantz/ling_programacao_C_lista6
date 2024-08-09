#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[100], i, *p, *q, *r, *s;
	
	p = A;
	q = &A[25];
	r = &A[50];
	s = &A[75];
	
	srand(time(NULL));
 	for (i = 0; i < 100; i++)
 		A[i] = rand()%100;
 		
	printf ("VETOR\n=====\n");
	for (p = A; p < q; p++)
		printf ("%d ", *p);	
	printf ("\n");
		
	for (q; q < r; q++)
		printf ("%d ", *q);
	printf ("\n");
		
	for (r; r < s; r++)
		printf ("%d ", *r);
	printf ("\n");
		
	for (s; s < &A[100]; s++)
		printf ("%d ", *s);
	
	return 0;
}
