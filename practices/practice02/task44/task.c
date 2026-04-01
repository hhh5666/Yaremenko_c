#include<stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);

	for (int i=0;i<=n;i++){
		char c;
		scanf("%c",&c);
		printf("%c",c);
	}
	printf("\n");

	return 0;
}
