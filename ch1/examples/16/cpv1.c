/*
 * example of page 16 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Tue 26 Apr 16:45:29 WEST 2016
 * */
#include <stdio.h>

/* copy input to output; 1st version */
int
main(void)
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;
}

