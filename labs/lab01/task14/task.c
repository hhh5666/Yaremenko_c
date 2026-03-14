#include<stdio.h>

int main() {
	int a, b, c;

	printf("a: %p\nb: %p\nc: %p\n", &a, &b, &c);
	
	int i1 = &b - &a, i2 = &c - &b, i3 = &c - &a;
	printf("\n%d\n%d\n%d\n", i1, i2, i3);

	return 0;
}
