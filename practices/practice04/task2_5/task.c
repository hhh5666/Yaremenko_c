#include<stdio.h>

int main()
{
	int n, a[56];
	
	scanf("%d",&n);
	for (int *p=a;p<&a[n];p++) {
		scanf("%d", p);
	}
	
	int b[56];
	int *s=b;

	for (int *p=a;p<&a[n];p++) {
		*s=*p;
		s++;
	}

	for (int *p=b;p<&b[n];p++) {
		printf("%d ", *p);
	}
	return 0;
}
