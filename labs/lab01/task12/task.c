#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	int i1 = a / 100, i2 = a % 100 / 10, i3 = a % 10;

	printf("%d\n%d\n%d\n", i1, i2, i3);

	return 0;
}
