/*
 * solution to exercise 1.15 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Ter Mai 24 21:49:01 WEST 2016
 * Temperature conversion program
 * */
#include <stdio.h>

#define LOWER  0
#define UPPER 300
#define STEP 20

float
fahrToCelsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}

int
main(void)
{
	int fahr;

	for (fahr = LOWER; fahr < UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, fahrToCelsius(fahr));
	return 0;
}

