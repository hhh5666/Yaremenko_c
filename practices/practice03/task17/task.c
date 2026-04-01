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
	int c=v->vec[0], c_i=0;
	for (int i=0;i<v->len;i++) {
		if (v->vec[i]>c) {
			c=v->vec[i];
			c_i=i;
		}
	}
	for (int i=c_i+1;i<v->len;i++) {
		v->vec[i]=0;
	}
}


int main()
{
	struct vec s;
	input_vec(&s);
	
	do_task(&s);
	
	output_vec(&s);
	return 0;
}
