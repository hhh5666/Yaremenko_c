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
	for (int i=1;i<=v->len-2;i++) {
		for (int j=0;j<v->len-i;j++) {
			if(v->vec[j]>v->vec[j+1]) {
				int c = v->vec[j];
				v->vec[j] = v->vec[j+1];
				v->vec[j+1] = c;
			}
		}
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
