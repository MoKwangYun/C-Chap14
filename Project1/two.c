#include<stdio.h>
#define ARYSIZE 5

double sum(double ary[], int size);

int main() {
	double data[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < ARYSIZE; i++) {
		printf("%5.1lf\n", data[i]);
	}

	double total = sum(&data[0], 5);
	printf("%.1lf", total);

	return 0;
}
double sum(double ary[], int size) {
	double total = 0;
	for (int j = 0; j < ARYSIZE; j++) {
		total += ary[j];
	}

	return total;
}