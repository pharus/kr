/*
 * example of page 15 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Tue 26 Apr 16:36:11 WEST 2016
 * Temperature conversion program with symbolic constants
 * */
#include <stdio.h>

#define LOWER 0    /* lower limit of table */
#define UPPER 300  /* upper limit */
#define STEP  20   /* step size */

/* print Fahrenheit-Celsius table */
int
main(void)
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	return 0;
}

