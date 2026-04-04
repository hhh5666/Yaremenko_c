#include<stdio.h>

int main() {
	int a;

	scanf("%d", &a);

	printf("x & 1 = %d\nx | 1 = %d\nx ^ 1 = %d\n~x = %d\n", a & 1, a | 1, a ^ 1, ~a);

	return 0;
}
