#include<stdio.h>

int main()
{
	int n, a[56];

	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}

	int *p = a;

	for (int i=0;i<n;i++) {
		printf("%d ", *p);
		p++;
	}

	return 0;
}
