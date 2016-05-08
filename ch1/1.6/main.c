/*
 * solution to exercise 1.6 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Tue 26 Apr 17:00:02 WEST 2016
 *
 * Verify getchar() != EOF
 * */
#include <stdio.h>


int
main(void)
{
	printf("(getchar() != EOF) = %d\n", getchar() != EOF);
	return 0;
}

