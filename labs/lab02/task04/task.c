#include<stdio.h>

struct rect
{
	int w;
	int h;
};

int math_S(struct rect s)
{
	return s.w * s.h;
}

void math_P(struct rect *s)
{
	printf("P: %d\n", s->w * 2 + s->h * 2);
}

int main()
{
	struct rect s = {5, 7};

	printf("S: %d\n", math_S(s));
	math_P(&s);
	return 0;
}
