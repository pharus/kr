/*
 * solution to exercise 1.10 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Tue 26 Apr 18:11:14 WEST 2016
 * Copy its input to output, replacing:
 * tab by \t
 * backspace by \b
 * backslash by \\
 * */
#include <stdio.h>

int
main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		if (c != '\t')
			if (c != '\b')
				if (c != '\\')
					putchar(c);
	}
	return 0;
}

