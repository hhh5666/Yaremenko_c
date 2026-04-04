#include<stdio.h>
#include<stdlib.h>

int input();

struct stud
{
	char *name;
	int age;
};

typedef struct
{
	int size;
	struct stud *arr;
} vec;

void vec_out(vec v);
void vec_clear(vec *v);

void resize_vec(vec *v, int n);
void add_vec(vec *v, char *n, int a);
void max_age_vec(vec v);

int main()
{
	vec v;
	v.arr = malloc(0 * sizeof(struct stud));
	v.size = 0;

	add_vec(&v, "Tom", 18);
	add_vec(&v, "Ban", 9);
	add_vec(&v, "Bob", 11);

	vec_out(v);
	printf("\n");
	max_age_vec(v);

	vec_clear(&v);
	return 0;
}


int input()
{
	int c;
	scanf("%d", &c);
	return c;
}



void vec_out(vec v)
{
	for (int i=0;i<v.size;i++) {
		printf("name: %s\tage:%d\n", v.arr[i].name, v.arr[i].age);
	}
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
	v->arr = realloc(v->arr, v->size * sizeof(struct stud));
}

void add_vec(vec *v, char *n, int a)
{
	resize_vec(v, v->size+1);
	v->arr[v->size-1].name = n;
	v->arr[v->size-1].age = a;
}

void max_age_vec(vec v)
{
	int max = 0;
	for (int i=1;i<v.size;i++) {
		if (v.arr[i].age > v.arr[max].age) {
			max = i;
		}
	}
	printf("name:%s\tage:%d\n", v.arr[max].name, v.arr[max].age);
}
