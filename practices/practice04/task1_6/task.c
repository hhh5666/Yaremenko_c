#include<stdio.h>

int main()
{
	int a = 6, *p, *s;

	p = &a;
	s = p;

	printf("%d : %d : %p", p, s, s);

	return 0;
}
