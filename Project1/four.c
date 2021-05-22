//���� 14-6
#include<stdio.h>

double sum(double (*data)[3], int, int);
void printarry(double data[][3], int, int);
int main() {
	double arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int rowsize = sizeof(arr) / sizeof(arr[0]);
	int colsize = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("2���� �迭�� ��ᰪ: ");
	printarry(arr, rowsize, colsize);

	printf("2���� �迭 ������: %.2f", sum(arr, rowsize, colsize));

	return 0;
}
// ������ �迭�� ��� �Լ� ����� ���ڷ� double data[][3]�� double (*data)[3]�� ������ �Ǹ��� ��밡��
double sum(double (*data)[3], int rowsize, int colsize) {
	double total = 0;
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			total += data[i][j];
		}
	}

	return total;
}

void printarry(double data[][3], int rowsize, int colsize) {
	for (int l = 0; l < rowsize; l++) {
		for (int k = 0; k < colsize; k++) {
			printf("x[%d][%d] = %.3f\n", l, k, data[l][k]);
		}
	}
}