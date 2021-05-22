//¿¹Á¦ 14-2 
#include<stdio.h>

void increase(int* origin, int increment);
int main() {
	int origin = 10;
	
	increase(&origin, 20);
	printf("%d", origin);

}

void increase(int* origin, int increment) {
	*origin += increment;
}