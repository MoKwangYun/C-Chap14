//예제 14-9
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int* add(int*, int, int);
int* subtract(int*, int, int);
int* multiply(int, int);
int main() {
	int m = 0, n = 0, sum = 0, diff = 0;
	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);

	printf("두 정수 합: %d\n", *add(&sum,  m, n));
	printf("두 정수 차: %d\n", *subtract(&diff, m, n));
	printf("두 정수 곱: %d\n", *multiply(m, n));

	return 0;
}

int* add(int* psum, int a, int b) {
	*psum = a + b;
	return psum;
}

int* subtract(int* pdiff, int a, int b) {
	*pdiff = a - b;
	return pdiff;
}

int* multiply(int a, int b) {
	int mult = a * b;
	return &mult;
}