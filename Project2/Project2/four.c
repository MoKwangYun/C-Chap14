//���� 14-15
#include<stdio.h>

void myprint(void) {
	printf("void������,�ű��ϳ�\n");
}

int main(void) {
	int m = 10;
	double d = 3.98;

	char str[][20] = { {"c���"}, {"����ֳ�!"} };

	void* p = &m;
	printf("p ���� ����: %d\n", *(int*)p);

	p = &d;
	printf("p ���� �Ǽ�: %f\n", *(double*)p);

	p = myprint;
	printf("p ���� �Լ� ����: \n");
	((void(*) (void))p)();

	p = str;
	printf("p ���� 2���� �迭: %s %s\n", (char(*)[20])p, (char(*)[20])p + 1);
	printf("str ���� 2���� �迭: %s %s\n", str, str + 1);

	return 0;
}
