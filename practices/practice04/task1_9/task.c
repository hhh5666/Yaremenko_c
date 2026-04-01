#include<stdio.h>

int main()
{
	int a, *p, *s;

	a = 6;

	p = &a;

	p++;

	printf("%d", (*p));

	return 0;
}
