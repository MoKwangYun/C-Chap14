//예제 14-15
#include<stdio.h>

void myprint(void) {
	printf("void포인터,신기하네\n");
}

int main(void) {
	int m = 10;
	double d = 3.98;

	char str[][20] = { {"c언어"}, {"재미있넹!"} };

	void* p = &m;
	printf("p 참조 정수: %d\n", *(int*)p);

	p = &d;
	printf("p 참조 실수: %f\n", *(double*)p);

	p = myprint;
	printf("p 참조 함수 실행: \n");
	((void(*) (void))p)();

	p = str;
	printf("p 참조 2차원 배열: %s %s\n", (char(*)[20])p, (char(*)[20])p + 1);
	printf("str 참조 2차원 배열: %s %s\n", str, str + 1);

	return 0;
}
