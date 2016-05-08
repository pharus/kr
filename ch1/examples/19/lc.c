/*
 * example of page 19 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Tue 26 Apr 18:00:58 WEST 2016
 * */
#include <stdio.h>

/* count lines in input */
int
main(void)
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
	return 0;
}
