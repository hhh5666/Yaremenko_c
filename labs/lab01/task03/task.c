#include<stdio.h>

int main() {
	int a = 10;
	float b = 3.14;
	char c = 'A';

	printf("int a: %p\n", &a);
	printf("float b: %p\n", &a);
	printf("char c: %p\n", &a);

	return 0;
}
