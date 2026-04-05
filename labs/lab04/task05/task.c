#include<stdio.h>
#include<stdlib.h>

int input();

int main()
{
	FILE * wfile = fopen("file.txt", "w");
	if(wfile)
	{
		char str[100];
		scanf("%s", str);
		size_t n = sizeof(str);
		fwrite(str, sizeof(str[0]), n, wfile);
	}

	fclose(wfile);

	FILE * rfile = fopen("file.txt", "r");
	char c;
	if(rfile) {
		int n = 100;
		char str[n];

		fread(str, sizeof(str[0]), n, rfile);

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
