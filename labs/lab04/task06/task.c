#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * wfile = fopen("file.txt", "w");
	if(wfile)
	{
		int arr[] = {1, 2, 3, 4, 5, 6};
		size_t n = sizeof(arr);
		fwrite(arr, sizeof(arr[0]), n, wfile);
	}

	fclose(wfile);

	FILE * rfile = fopen("file.txt", "r");
	if(rfile) {
		int arr[6];
		size_t n = sizeof(arr);

		fread(arr, sizeof(arr[0]), n, rfile);

		for(int i=0; i<6; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	fclose(rfile);
	return 0;
}
