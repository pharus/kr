/*
 * solution to exercise 1.3 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Mon 25 Apr 21:56:42 WEST 2016
 *
 * Temperature conversion program with a heading
 * */
#include <stdio.h>


int
main(void)
{
	float fahr, celsius;
	int lower, upper, step; 

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	/* the heading */
	printf("F    C\n");
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

