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
	int c1=v->vec[0], c2=v->vec[0];
	for (int i=0;i<v->len;i++) {
		if(v->vec[i]>c1) {
			c2 = c1;
			c1 = v->vec[i];
		}
		else if (v->vec[i]>c2) {
			c2 = v->vec[i];
		}
	}
	
	printf("%d\n", c2);	
}


int main()
{
	struct vec s;
	input_vec(&s);
	
	do_task(&s);
	
	return 0;
}
