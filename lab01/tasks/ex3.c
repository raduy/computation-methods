#include <stdio.h>
#include <math.h>

void unstablySolveQuadraticEq(double a, double b, double c);

int main() {

	printf("Zadanie 3\n");
	printf("Podać i zademonstrować własny przykład algorytmu niestabilnego numerycznie\n");

	printf("Rozwiazanie rownania kwadratowego bez wzorów viete'a\n\n");

	unstablySolveQuadraticEq(1.0, -2.0, 1.0);
	printf("Little change in input data:\n");
	unstablySolveQuadraticEq(1.1, -2.01, 1.0);

	return 0;
}

void unstablySolveQuadraticEq(double a, double b, double c) {

	printf("Input %.3lf %.3lf %.3lf\n", a, b, c);
	printf("\n\nSolving...\n");
	double solOne, solTwo;
	double delta = b * b - 4 * a * c;
	printf("Delta is: %.4lf\n", delta);

	if (delta < 0) {
		printf("No real solutions.\n");
		return;
	}

	if (delta > 0) {
		double sqrtDelta = sqrt(delta);
		solOne = (-b - sqrtDelta) / 2 * a;
		solTwo = (-b + sqrtDelta) / 2 * a;
		printf("Solution one: %.4lf\n", solOne);
		printf("Solution two: %.4lf\n", solTwo);
		return;
	}

	printf("There is one solution: %.4lf\n", - b / (2 * a));
}
