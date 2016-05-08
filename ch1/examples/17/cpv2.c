/*
 * example of page 17 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Tue 26 Apr 16:51:15 WEST 2016
 * */
#include <stdio.h>

int
main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
	return 0;
}

