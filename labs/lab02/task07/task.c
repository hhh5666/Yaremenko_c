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

struct stud_list
{
	struct stud list[56];
	int size;
};



void stud_init(struct stud_list * sl, char n[], int age, enum faculty f, int score)
{
	sl->list[sl->size].name = n;
	sl->list[sl->size].age = age;
	sl->list[sl->size].fac = f;
	sl->list[sl->size].score = score;
	sl->size += 1;
}

void stud_out(struct stud s)
{
	printf("name: %s\t age: %d\t fac_id: %d\t score: %d\n", s.name, s.age, s.fac, s.score);
}

void stud_all_out(struct stud_list sl)
{
	for (int i=0; i<sl.size;i++) {
		printf("name: %s\t age: %d\t fac_id: %d\t score: %d\n", sl.list[i].name, sl.list[i].age, sl.list[i].fac, sl.list[i].score);
	}
}

void stud_find(struct stud_list sl, char name[])
{
	for (int i=0; i<sl.size;i++) {
		if (sl.list[i].name == name)
			printf("name: %s\t age: %d\t fac_id: %d\t score: %d\n", sl.list[i].name, sl.list[i].age, sl.list[i].fac, sl.list[i].score);
	}
}

void stud_sort_out(struct stud_list sl)
{
	for (int i=0;i<sl.size-1;i++) {
		for (int j=1;j<sl.size-i;j++) {
			if (sl.list[j].score < sl.list[j-1].score) {
				struct stud c = sl.list[j];
				sl.list[j] = sl.list[j-1];
				sl.list[j-1] = c;
			}
		}
	}
	stud_all_out(sl);
}


int main()
{
	struct stud_list sl = {.size=0};

	stud_init(&sl, "Dan", 17, prog, 6);
	stud_init(&sl, "Tom", 18, guest, 15);
	stud_init(&sl, "Bob", 20, guest, 13);
	
	stud_sort_out(sl);
	//stud_all_out(sl);
	//stud_find(sl, "Tom");

	return 0;
}
