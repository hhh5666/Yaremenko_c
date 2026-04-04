#include<stdio.h>
#include<stdlib.h>

int input();


typedef struct
{
	int size;
	int *arr;
} vec;

void vec_init(vec *v);
void vec_out(vec v);
void vec_clear(vec *v);

void resize_vec(vec *v, int n);
void pop_vec(vec *v, int n);
void add_vec(vec *v, int n, int k);

int main()
{
	vec v;

	vec_init(&v);

	int c = input();
	add_vec(&v, c, input());

	vec_out(v);
	

	vec_clear(&v);
	return 0;
}


int input()
{
	int c;
	scanf("%d", &c);
	return c;
}



void vec_init(vec *v)
{
	int n;
	scanf("%d", &n);
	v->size = n;
	v->arr = malloc(n * sizeof(int));

	for (int i=0;i<n;i++) {
		scanf("%d", &v->arr[i]);
	}
}	

void vec_out(vec v)
{
	for (int i=0;i<v.size;i++) {
		printf("%d ", v.arr[i]);
	}
	printf("\n");
}

void vec_clear(vec *v)
{
	free(v->arr);
	v->arr = NULL;
	v->size = 0;
}



void resize_vec(vec *v, int n)
{
	v->size = n;
	v->arr = realloc(v->arr, v->size * sizeof(int));
}

void pop_vec(vec *v, int n)
{
	for (int i=n; i<v->size-1;i++) {
		v->arr[i] = v->arr[i+1];
	}
	resize_vec(v, v->size-1);
}

void add_vec(vec *v, int n, int k)
{
	resize_vec(v, v->size+1);
	for (int i = v->size-1;i>n;i--) {
		v->arr[i] = v->arr[i-1];
	}
	v->arr[n] = k;
}
