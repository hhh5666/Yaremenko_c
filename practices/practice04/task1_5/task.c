#include<stdio.h>

int main()
{
	int a, b, *p, *s;
	
	p = &a;
	s = &b;

	if (p == s) {
		printf("null\n");
	}
	else {
		printf("not null\n");
	}
	
	printf("%p ; %p\n", p, s);

	return 0;
}
