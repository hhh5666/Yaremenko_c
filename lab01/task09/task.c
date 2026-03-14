#include<stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int c = x^2 + x*2 + 1;
	printf("%d\n", c);
	int h = (x+1)^2 - (x-1)^2;
	printf("%d\n", x);

	return 0;
}
