//예제 14-12 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);

int main(void) {
	void (*pf)(double*, double, double) = NULL;

	double m, n, result = 0;
	printf("+,-를 수행할 실수 2개를 입력: ");
	scanf("%lf %lf", &m, &n);

	pf = &add; // pf = add;와 동일 , pf = add();는 오류
	pf(&result, m, n);
	printf("pf = %p, 함수 add() 주소 = %p\n", pf, add);
	printf("더하기 수행: %lf + %lf == %lf\n\n", m, n, result);

	pf = &subtract;
	pf(&result, m, n);
	printf("pf = %p, 함수 subtract() 주소 = %p\n", pf, subtract);
	printf("빼기 수행: %lf + %lf == %lf\n\n", m, n, result);

	return 0;
}
void add(double* fresult, double m, double n) {
	*fresult = m + n;
}

void subtract(double* ffresult, double m, double n) {
	*ffresult = m - n;
}