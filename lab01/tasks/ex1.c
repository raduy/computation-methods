#include <stdio.h>
#include <math.h>

int main(void) {

	printf("Zadanie 1\n");
	printf("Napisać program liczący kolejne wyrazy ciągu:\n"
		"x{n+1} = x{n} + 3.0 * x{n} * (1 - x{n}) startując z punktu x{0} = 0.01. Wykonać to zadanie dla różnych reprezentacji\n"
		"liczb (float, double) i na różnych maszynach. Dlaczego wyniki się rozbiegają?\n");
	float xFloat = 0.01f;
	double xDouble = 0.01;
	double diff = 0.2;
	int i;
	int bigDiff = 0;
	
	for(i = 0; i < 100; i++) {

		if (fabs(xFloat - xDouble) > (diff * xDouble) && bigDiff == 0) {
			printf("\n\t\t Difference more than %d%% i = %d \t\t\n\n", (int) (diff * 100), i);
			bigDiff = 1;
		}

		printf("x(float) = \t %.7f; \t x(double) = \t%.7lf\n", xFloat, xDouble);
		xFloat = xFloat + 3.0 * xFloat * (1 - xFloat);
		xDouble = xDouble + 3.0 * xDouble * (1 - xDouble);
	}

	return 0;
}
