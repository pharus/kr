/*
 * solution to exercise 1.13 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Ter Mai 24 19:56:24 WEST 2016
 * Print histogram with length of words
 * */
#include <stdio.h>

#define IN      1   /* inside a word */
#define OUT     0   /* outside a word */
#define MAX_LEN 25  /* max length of words considered */

int
main(void)
{
	int c, state, i;
	int len[MAX_LEN]; /* array to store lengths */


	for (i = 0; i < MAX_LEN; i++)
		len[i] = 0;

	state = OUT;
	i = 0; /* stores temporary length */

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				if (i < MAX_LEN)
					len[i - 1]++;
				else
					len[MAX_LEN - 1]++;

				i = 0;
			}
			state = OUT;
		} else {
			state = IN;
			i++;
		}
	}

	if (state == IN) {
		if (i < MAX_LEN)
			len[i - 1]++;
		else
			len[MAX_LEN - 1]++;
	}

	printf("** Histogram of length of words **\n");
	for (i = 0; i < MAX_LEN; i++) {
		printf("%3d", i + 1);
		if (i == MAX_LEN - 1)
			putchar('+');
		else
			putchar(' ');
		printf(" -> ");
		for (c = 0; c < len[i]; c++)
			putchar('*');

		putchar('\n');
	}
	return 0;
}

