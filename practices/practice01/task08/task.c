#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	int c1 = a++, c2 = ++a;

	printf("x++: %d\n++x: %d\n", c1, c2);


	return 0;
}
