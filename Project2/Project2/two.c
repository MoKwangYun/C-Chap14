//���� 14-13
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main() {
	char op[4] = { '+','-','*','/' };
	
	void(*fpary[4])(double*, double, double) = { add, subtract, multiply, devide };

	double m, n, result;
	printf("��Ģ������ ������ �Ǽ� 2�� �Է�:");
	scanf("%lf %lf", &m, &n);

	for (int i = 0; i < 4; i++) {
		fpary[i](&result, m, n);
		printf("%.2lf %c %.2lf == %.2lf\n", m, op[i], n, result);
	}

	return 0;
}
void add(double* z, double x, double y) {
	*z = x + y;
}
void subtract(double* z, double x, double y) {
	*z = x - y;
}
void multiply(double* z, double x, double y) {
	*z = x * y;
}
void devide(double* z, double x, double y) {
	*z = x / y;
}