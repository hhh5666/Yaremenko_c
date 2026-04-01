#include<stdio.h>

int main()
{
	int n, a[56];

	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	
	int all = 0;

	for (int *p=a;p<&a[n];p++) {
		all += *p;
	}
	
	printf("%d\n", all);
	return 0;
}
