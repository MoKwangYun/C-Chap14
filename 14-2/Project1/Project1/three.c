//���� 14-10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void multiply(double*, const double*, const double*);
void devideandincrement(double*, double*, double*);
int main() {
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &m, &n); 
	
	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	
	printf("�� �Ǽ� ��: %.2f, ����: %.2f\n", mult, dev);
	printf("������ �� �Ǽ�: %.2f, %.2f\n", m, n);
}
void multiply(double* result, const double* a, const double* b) {
	*result = *a * *b;
	//*a = *a + 1, *b = *b + 1 - const���� *a, *b�� ���� �Ұ�
}

void devideandincrement(double* result, double* a, double* b) {
	*result = *a / *b;
	++(* a);  // == ++*a, a�� ����Ű�� ������ �� 1����
	(*b)++; // b�� ����Ű�� ������ ������ 1 ���� , *b++�ʹ� �ٸ�
}