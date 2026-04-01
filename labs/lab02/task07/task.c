#include<stdio.h>

enum faculty
{
	prog,
	sis,
	guest
};

struct stud
{
	char *name;
	int age;
	enum faculty fac;
	int score;
};

void stud_init(struct stud *s, char n[], int age, enum faculty f, int score)
{
	s->name = n;
	s->age = age;
	s->fac = f;
	s->score = score;
}

void stud_out(struct stud s[], int n)
{
	for (int i=0; i<n;i++) {
		printf("name: %s\t age: %d\t fac_id: %d\t score: %d\n", s[i].name, s[i].age, s[i].fac, s[i].score);
	}
}

void stud_find(struct stud s[], int n, char name[])
{
	for (int i=0; i<n;i++) {
		if (s[i].name == name)
			printf("name: %s\t age: %d\t fac_id: %d\t score: %d\n", s[i].name, s[i].age, s[i].fac, s[i].score);
	}
}

int main()
{
	struct stud st[56];
	int size = 0;

	st[0].name = "Tom";
	st[0].age = 2;
	st[0].fac = sis;
	st[0].score = 4;

	size = 1;

	stud_init(&st[size], "Dan", 4, guest, 15);
	size++;
	stud_find(st, size, "Tom");

	return 0;
}
