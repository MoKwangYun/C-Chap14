//����  14-8
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void add(int*, int, int);
int main() {
	int m = 0;
	int n = 0;
	int sum = 0;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);

	add(&sum, m, n);
	printf("�� ���� ��: %d\n", sum);

	return 0;
}

void add(int* sum, int m, int n) {
	*sum = m + n;
}

