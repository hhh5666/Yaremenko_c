#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;

	scanf("%d", &n);

	int *a = calloc(n, sizeof(int));

	for (int i=0;i<n;i++) {
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
