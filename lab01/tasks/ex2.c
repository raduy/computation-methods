#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_ieee_utils.h>

float machineEpsFloat() {
	float machineEps = 1.0f;

	while ((float) (1.0 + machineEps) > 1.0f) {
		machineEps /= 2.0f;
	}

	return machineEps *= 2.0f;
}

double machineEpsDouble() {
	double machineEps = 1.0;

	while ((double) (1.0 + machineEps) > 1.0) {
		machineEps /= 2.0;
	}

	return machineEps *= 2.0;
}

int main(void) {

	printf("Zadanie 2\n");
	printf("Znaleźć ""maszynowe epsilon"", czyli najmniejszą liczbę a, \n"
		"taką że a+1>1. Przedstawić wyniki dla różnych maszyn i różnych typów danych.\n"
		"Pierwszy sposób: obliczając epsilon z definicji (w pętli);\n"
		"Drugi sposób: obliczając wartość wyrażenia: 3*(4/3-1)-1\n");

	printf("Using loop:\n");
	printf("Machine eps for float: %e\n", machineEpsFloat());
	printf("Machine eps for double: %e\n", machineEpsDouble());

	printf("\nUsing expression:\n");

	float exprFloat = 3.0f * (4.0f / 3.0f - 1.0f) - 1.0f;
	double exprDouble = 3.0 * (4.0 / 3.0 - 1.0) - 1.0;

	gsl_ieee_fprintf_float(stdout, &exprFloat);
	putc('\n', stdout);
	gsl_ieee_fprintf_double(stdout, &exprDouble);
	putc('\n', stdout);

	printf("Machine eps for float: %e\n", exprFloat);
	printf("Machine eps for double: %e\n", exprDouble);

	return EXIT_SUCCESS;
}
