#include <stdio.h>
#include <stdlib.h>
int main()
{
	float matriz[50][50], *p;
	int i, j, *pi, *pj;
	
	p = &matriz[0][0];
	pi = &i;
	pj = &j;
	
	printf ("MATRIZ (50x50)\n==============\n");
	for (*pi = 0; *pi < 2500; (*pi)++)
	{
		*p = 0.0;
		printf("%.1f  ", *p);
		p++;
	}

	return 0;
}
