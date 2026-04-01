#include<stdio.h>

struct vec 
{
	int vec[56];
	int len;
};

void input_vec(struct vec * v)
{
	scanf("%d", &v->len);
	for (int i=0;i<v->len;i++) {
		scanf("%d", &v->vec[i]);
	}
}

void output_vec(struct vec * v)
{
	for (int i=0;i<v->len;i++) {
		printf("%d ", v->vec[i]);
	}
	printf("\n");
}


void do_task(struct vec * v)
{
	int all=0;
	for (int i=0;i,i<v->len;i+=2) {
		all += v->vec[i];
	}
	
	printf("%d\n", all);	
}


int main()
{
	struct vec s;
	input_vec(&s);
	
	do_task(&s);
	
	return 0;
}
