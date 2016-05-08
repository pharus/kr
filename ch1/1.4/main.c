/*
 * solution to exercise 1.4 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Mon 25 Apr 22:01:20 WEST 2016
 *
 * Temperature conversion program
 * Celsius to fahrenheit
 * */
#include <stdio.h>


int
main(void)
{
	float celsius, fahr;
	int lower, upper, step; 

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	/* the heading */
	printf("C    F\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}

