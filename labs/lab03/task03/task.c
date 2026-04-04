#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int size;
	int *arr;
} vec;

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


int max_in_vec(vec v)
{
	int max = v.arr[0];
	for (int i=0; i<v.size; i++) {
		if (v.arr[i] > max) {
			max = v.arr[i];
		}
	}
	return max;
}

int min_in_vec(vec v)
{
	int min = v.arr[0];
	for (int i=0; i<v.size; i++) {
		if (v.arr[i] < min) {
			min = v.arr[i];
		}
	}
	return min;
}

int sum_vec(vec v)
{
	int sum = 0;
	for (int i=0; i<v.size; i++) {
		sum += v.arr[i];
	}
	return sum;
}




int main()
{
	vec v;

	vec_init(&v);

	printf("%d\n", max_in_vec(v));
	printf("%d\n", min_in_vec(v));
	printf("%d\n", sum_vec(v));
	//vec_out(v);

	return 0;
}
