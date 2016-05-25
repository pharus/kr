/*
 * solution to exercise 1.17 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Qua Mai 25 00:52:02 WEST 2016
 * print lines longer than 80 char
 * */
#include <stdio.h>

#define BARRIER 80

int getline(char line[], int maxline);
/* no need for copy here */

void
skiptilend();

int
main(void)
{
	int len; /* current line length */
	char line[BARRIER+1]; /* current input line */

	while ((len = getline(line,BARRIER+1)) > 0) {
		if (len == BARRIER && line[len - 1] != '\n') {
			printf("%s", line);
			skiptilend();
		}
	}
	
	return 0;
}

/* getline: read a line into s, return length */
int
getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* read and print until \n */
void
skiptilend()
{
	int c;

	while ((c = getchar()) != EOF && c != '\n')
		putchar(c);
	putchar('\n');
}
