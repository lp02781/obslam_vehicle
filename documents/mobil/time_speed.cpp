#include <time.h>
#include <stdio.h>

int main(void)
{
	clock_t start, stop;


	start = clock();
	
	getchar();	/* Wait for keypress...	*/

	stop = clock();


	printf("Approx seconds, tenths, hundredths and milliseconds: %.9f\n", 
		((double)(stop - start) / CLOCKS_PER_SEC));

	return 0;
}
