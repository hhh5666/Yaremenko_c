#include<stdio.h>

struct date
{
	int d;
	int m;
	int y;
};

struct person
{
	char name[56];
	struct date birthday;
};

void person_out(struct person st[])
{
	for (int i=0;i<3;i++) {
		printf("name: %s\t birthday: %d.%d.%d\n", st[i].name, st[i].birthday.d, st[i].birthday.m, st[i].birthday.y);
	}
}

void person_all_out(struct person st[])
{
	printf("\n");
	for (int i=0;i<3;i++) {
		if (st[i].birthday.y > 2000) 
			printf("name: %s\t birthday: %d.%d.%d\n", st[i].name, st[i].birthday.d, st[i].birthday.m, st[i].birthday.y);
	}
}

int main()
{
	struct person s[] = {{"Tom", {7, 10, 2009}}, {"Dan", {3, 01, 1998}}, {"Bob", {7, 2, 2008}}};
	
	person_out(s);

	person_all_out(s);
	
	return 0;
}
