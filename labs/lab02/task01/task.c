#include<stdio.h>

struct stud
{
	char name[56];
	int age;
	int score;
};

void stud_init(struct stud * st)
{
	scanf("%s", &st->name);
	scanf("%d %d", &st->age, &st->score);
}

void stud_out(struct stud st)
{
	printf("name: %s\nage: %d\nscore: %d\n", st.name, st.age, st.score);
}

int main()
{
	struct stud s;
	stud_init(&s);
	
	stud_out(s);
	return 0;
}
