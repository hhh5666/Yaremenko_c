#include<stdio.h>

struct stud
{
	char name[56];
	int age;
	int score;
};

void stud_init(struct stud * st[])
{
	for (int i=0;i<5;i++) {
		scanf("%s", &st[i]->name);
		scanf("%d %d", &st[i]->age, &st[i]->score);
	}
}

void stud_out(struct stud st)
{
	printf("name: %s\tage: %d\tscore: %d\n", st.name, st.age, st.score);
}

void stud_all_out(struct stud st[])
{
	for (int i=0;i<5;i++) {
		printf("name: %s\tage: %d\tscore: %d\n", st[i].name, st[i].age, st[i].score);
	}
}

void max_stud(struct stud st[]) 
{
	int max = 0;

	for (int i=1;i<5;i++) {
		if (st[i].score > st[max].score) max = i;
	}
	printf("\n");
	stud_out(st[max]);
}

int main()
{
	struct stud s[] = {{"Tom", 18, 15}, {"Max", 7, 999}, {"Dan", 17, 6}, {"Mark", 15, 17}, {"Adolf", 21, 20}};
	//stud_init(&s);
	
	stud_all_out(s);
	max_stud(s);
	return 0;
}
