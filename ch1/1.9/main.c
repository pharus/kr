/*
 * solution to exercise 1.9 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Tue 26 Apr 18:06:35 WEST 2016
 * Copies Input to output, replacing each string of one or more blanks by a
 * single blank
 * */
#include <stdio.h>


int
main(void)
{
	int c, a;

	a = EOF; /* before character */

	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (c != a)
				putchar(c);
		a = c;
	}
	return 0;
}

