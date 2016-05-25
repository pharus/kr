/*
 * solution to exercise 1.16 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Ter Mai 24 22:07:48 WEST 2016
 * revision of longest line's program main to print length of the longest
 * arbitrarily line
 * */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
/* no need for copy here */

/* print length of longest input line */
int
main(void)
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	int aux;

	max = 0;
	aux = 0;
	while ((len = getline(line, MAXLINE)) > 0) {	
		aux += len;
		if (len < MAXLINE - 1 || line[len-1] == '\n') {
			if (aux > max)
				max = len;
			aux = 0;
		}
	}
	
	if (aux > max)
		max = aux;
	max--; /* remove \n */
	printf("Longest line has %d chars\n", max);
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

