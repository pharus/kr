/*
 * example of page 18 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Tue 26 Apr 17:50:06 WEST 2016
 * */
#include <stdio.h>

/* count characters in input; 1st version */
int
main(void)
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
	return 0;
}

