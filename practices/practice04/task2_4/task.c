#include<stdio.h>

int main()
{
	int n, a[56];
	
	scanf("%d",&n);
	for (int *p=a;p<&a[n];p++) {
		scanf("%d", p);
	}
	
	for (int *p=a;p<&a[n];p++) {
		printf("%d ", *p);
	}
	return 0;
}
