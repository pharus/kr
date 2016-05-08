/*
 * solution to exercise 1.12 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Tue 26 Apr 18:24:52 WEST 2016
 * Write one word per line
 * */
#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

/* write a word per line */
int
main(void)
{
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN)
				putchar('\n');
			state = OUT;
		} else {
			state = IN;
			putchar(c);
		}
	}
	if (state == IN)
		putchar('\n');
	return 0;
}

