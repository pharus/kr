/*
 * solution to exercise 1.8 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Tue 26 Apr 18:03:36 WEST 2016
 * Count blanks, tabs and newl
 * */
#include <stdio.h>

int
main(void)
{
	int c, nl, nt, nb;

	nl = 0; /* count newlines */
	nt = 0; /* count tabs */
	nb = 0; /* count blanks */

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nl++;
		if (c == '\t')
			nt++;
		if (c == ' ')
			nb++;
	}

	printf("%d %d %d\n", nl, nt, nb);
	return 0;
}

