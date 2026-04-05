#include<stdio.h>
#include<stdlib.h>

int input();

int main()
{
	FILE * file = fopen("file.txt", "w");
	if(file==NULL) {
		perror("Error file.txt");
	}



	fclose(file);
	return 0;
}


int input()
{
	int c;
	scanf("%d", &c);
	return c;
}
