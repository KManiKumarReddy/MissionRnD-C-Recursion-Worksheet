/*

	You have N steps to climb .
	You can either take one step or two steps at a time .
	You need to find the total number of ways you can reach N steps .

	Example : For N=4 , You can either reach 4 steps in following ways
	->1111
	->112
	->121
	->211
	->22
	So total number of ways is 5

	Input : A Integer denoting N (number of steps )
	Output : Return an Integer denoting the number of ways to reach N steps

	Example Input : get_steps(5)
	Example Output : Returns 8

	Note : Test Cases would be small <25.

*/
#include "stdafx.h"

int fib(int n) {
	// array storing fibonacci numbers
	static int fib_arr[100];
	fib_arr[0] = 1;
	fib_arr[1] = 1;
	int i;
	for (i = 2; i < 100; i++)
		fib_arr[i] = -1;
	if (fib_arr[n] != -1)
		return fib_arr[n];
	else
		return fib(n - 1) + fib(n - 2);
}

int get_steps(int s)
{
	if (s <= 0)
		return 0;
	// you can observe the steps following fibonacci series
	return fib(s);
}
