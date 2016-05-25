/*
 * solution to exercise 1.14 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Ter Mai 24 20:38:51 WEST 2016
 * Print histogram of character frequency
 * */
#include <stdio.h>

#define NUM_CHARS 256

int
main(void)
{
	int c, i;
	int freq[NUM_CHARS];

	for (i = 0; i < NUM_CHARS; i++)
		freq[i] = 0;

	while ((c = getchar()) != EOF)
		freq[c]++;

	printf("** Histogram of character frequency **\n");
	for (i = 0; i < NUM_CHARS; i++) {
		printf("%3d -> ", i + 1);
		for (c = 0; c < freq[i]; c++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}

