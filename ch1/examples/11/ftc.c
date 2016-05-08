/*
 * example of page 11 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Mon 25 Apr 21:49:00 WEST 2016
 * */
#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int
main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		/* change here for digit wideness */
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

