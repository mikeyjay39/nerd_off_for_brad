#include <stdio.h>
#include <time.h>

int fibonacci(int x);

int main(void)
{
	clock_t t;
	t = clock();
	printf("fibonacci sequence for 20 is: %d\n", fibonacci(20));
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Fibonacci recursion took %f seconds to execute \n", time_taken);
	return 0;

}

int fibonacci(int x) {
	if (x <= 2) {
		return 1;
	} else {
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
}
