//예제14-14
#include<stdio.h>

void myprint(void) {
	printf("void 포인터 신기!\n");
}

int main(void) {
	int m = 0;
	double d = 3.98;

	void* p = &m;   //m의 주소값만을 저장     
	printf("%d\n", p);  //저장된 주소값을 출력
	//*p = 5나 printf("%d", *p)와 같이 가리키는 변수의 저장값 참조, 수정 불가

	p = &d; //d의 주소값만을 저장
	printf("%d\n", p);

	p = myprint;
	printf("%d\n", p);

	return 0;
}