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

	char str[] = "Hello";
	int n = sizeof(str)/sizeof(str[0]);
	for(int i=0; i < n; i++) {
		putc(str[i], wfile);
	}

	fclose(wfile);

	FILE * rfile = fopen("file.txt", "r");
	char c;
	if(rfile) {
		while((c=getc(rfile)) != EOF)
		{
			printf("%c", c);
		}
		fclose(rfile);
	}
	return 0;
}


int input()
{
	int c;
	scanf("%d", &c);
	return c;
}
