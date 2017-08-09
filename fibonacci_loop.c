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
	printf("Fibonnaci loop took %f seconds to execute \n", time_taken);
	return 0;

}

int fibonacci(int x) {
	int total;
	int previous = 1;
	int pre_previous = 0;
	for(int i = 1; i < x; i++) {
		total = previous + pre_previous;
		pre_previous = previous;
		previous = total;
	}
	return total;
}
