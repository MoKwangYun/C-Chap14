//����14-14
#include<stdio.h>

void myprint(void) {
	printf("void ������ �ű�!\n");
}

int main(void) {
	int m = 0;
	double d = 3.98;

	void* p = &m;   //m�� �ּҰ����� ����     
	printf("%d\n", p);  //����� �ּҰ��� ���
	//*p = 5�� printf("%d", *p)�� ���� ����Ű�� ������ ���尪 ����, ���� �Ұ�

	p = &d; //d�� �ּҰ����� ����
	printf("%d\n", p);

	p = myprint;
	printf("%d\n", p);

	return 0;
}