//¿¹Á¦ 14-7
#include<stdio.h>
#include<stdarg.h>

double avg(int numagrs, ...);

int main() {
	printf("Æò±Õ %.2f\n", avg(5, 1.2, 2.1, 3.6, 4.3, 5.8));

	return 0;
}

double avg(int numagrs, ...) {
	va_list argp;

	va_start(argp, numagrs);

	double total = 0;

	for (int i = 0; i < numagrs; i++) {
		total += va_arg(argp, double);
	}
	va_end(argp);

	return (total / numagrs);
}