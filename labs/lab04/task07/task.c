#include<stdio.h>
#include<stdlib.h>

struct person
{
	char name[20];
	int age;
};

int save(char * file, struct person *ps);
int load(char * file);

int main()
{
	char *file = "file.txt";
	struct person tom = {"Tom", 18};

	save(file, &tom);
	load(file);

	return 0;
}

int save(char *file, struct person *p)
{
	FILE *wbf = fopen(file, "wb");
	char *c;
	int size = sizeof(struct person);

	if (!wbf)
	{
		printf("Error: open file");
		return 1;
	}

	c = (char *)p;

	for (int i = 0; i < size; i++)
	{
		putc(*c++, wbf);
	}
	fclose(wbf);
	return 0;
}

int load(char * file)
{
	FILE *rbf = fopen(file, "rb");
	char *c;
	int i;

	int size = sizeof(struct person);

	struct person * pr = malloc(size);
	if(!rbf)
	{
		printf("Error: open file");
		return 1;

	}
	c = (char *)pr;
	while((i = getc(rbf))!=EOF)
	{
		*c = i;
		c++;
	}

	printf("name:%s\tage:%d\n", pr->name, pr->age);
	fclose(rbf);
	
	free(pr);
	return 0;
}
