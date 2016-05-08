/*
 * example of page 13 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * Mon 25 Apr 22:05:01 WEST 2016
 * */
#include <stdio.h>

/* print Fahrenheit-Celsius table */
int
main(void)
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return 0;
}

