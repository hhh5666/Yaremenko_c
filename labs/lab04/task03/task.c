#include<stdio.h>
#include<stdlib.h>

int input();

int main()
{
	FILE * wfile = fopen("file.txt", "w");
	if(wfile==NULL) {
		perror("Error file.txt");
		return 1;
	}

	fputs("Hello\n", wfile);
	fputs("Hello two\n", wfile);

	fclose(wfile);

	FILE * rfile = fopen("file.txt", "r");
	char str[100];
	if(fgets(str, sizeof(str), rfile))
	{
		printf("%s", str);
	}
	if(fgets(str, sizeof(str), rfile))
	{
		printf("%s", str);
	}
	fclose(rfile);
	return 0;
}


int input()
{
	int c;
	scanf("%d", &c);
	return c;
}
