/*
 * example of page 18 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Tue 26 Apr 17:50:13 WEST 2016
 * */
#include <stdio.h>

/* count characters in input; 2nd version */
int
main(void)
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
	return 0;
}

