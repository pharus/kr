/*
 * solution to exercise 1.5 of K&R
 * 
 * by pharus (pintomachado@tecnico.ulisboa.pt)
 * @ Mon 25 Apr 22:11:28 WEST 2016
 * Temperature conversion program in reverse order
 * */
#include <stdio.h>

int
main(void)
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return 0;
}

