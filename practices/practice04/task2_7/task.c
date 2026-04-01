#include<stdio.h>

int main()
{
	int n, a[56];
	
	scanf("%d",&n);
	for (int *p=a;p<&a[n];p++) {
		scanf("%d", p);
	}
	
	for (int *p=a;p<&a[n];p++) {
		if (*p<0) {
			printf("%d\n", *p);
			break;
		}
	}
	return 0;
}
