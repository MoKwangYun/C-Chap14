//���� 14-12 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);

int main(void) {
	void (*pf)(double*, double, double) = NULL;

	double m, n, result = 0;
	printf("+,-�� ������ �Ǽ� 2���� �Է�: ");
	scanf("%lf %lf", &m, &n);

	pf = &add; // pf = add;�� ���� , pf = add();�� ����
	pf(&result, m, n);
	printf("pf = %p, �Լ� add() �ּ� = %p\n", pf, add);
	printf("���ϱ� ����: %lf + %lf == %lf\n\n", m, n, result);

	pf = &subtract;
	pf(&result, m, n);
	printf("pf = %p, �Լ� subtract() �ּ� = %p\n", pf, subtract);
	printf("���� ����: %lf + %lf == %lf\n\n", m, n, result);

	return 0;
}
void add(double* fresult, double m, double n) {
	*fresult = m + n;
}

void subtract(double* ffresult, double m, double n) {
	*ffresult = m - n;
}