//���� 14-4
#include<stdio.h>

int sumary(int* ary, int size);
int main() {
	int point[] = { 5, 10, 15, 20 };
	int arylength = sizeof(point) / sizeof(int);

	int* address = point;
	int sum = 0;
	for (int i = 0; i < arylength; i++) {
		sum += *(address+i);
	}
	printf("main ���� ���� ��: %d\n", sum);

	printf("sumary ȣ��� ���� ��: %d\n", sumary(point, 4));
	printf("sumary ȣ��� ���� ��: %d\n", sumary(&point[0], 4));
	printf("sumary ȣ��� ���� ��: %d\n", sumary(address, 4));
}
int sumary(int* ary, int size) {
	int total = 0;
	for (int j = 0; j < size; j++) {
		total += *(ary + j); // +=ary[j], += *ary++ , += *(ary++) ����
	}
	return total;
}
