#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int square(int a)
{
	return a*a;
}

int is_even(int a)
{
	return a%2;
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}

void print_1_to_n(int n)
{
	for (int i=1;i<=n;i++){
		printf("%d ",i);
	}
	printf("\n");
}

int sum_1_to_n(int n)
{
	int all=0;
	for (int i=1;i<=n;i++) {
		all += i;
	}
}

int fack(int n)
{
	int all = 1;
	for (int i = 1; i <= n; i++)
	{
		all *= i;
	}
}

int count_digits(int n)
{
	int all = 0;
	for (int i = n;i!=0;i=i/10) {
		all++;
	}
	return all;
}

int sum_digits(int n)
{
	int all = 0;
	for (int i = n;i!=0;i=i/10) {
		all += i%10;
	}
	return all;
}

int max3(int a, int b, int c)
{
	if (a > b) {
		if(a > c) return a;
		else return c;
	}
	else {
		if (b > c) return b;
		else return c;
	}
}

void print_array(int a[], int n)
{
	for (int *i = a;i<&a[n];i++) {
		printf("%d ", *i);
	}
	printf("\n");
}

int sum_array(int a[], int n)
{
	int all = 0;
	for (int *i = a;i<&a[n];i++) {
		all += *i;
	}
	return all;
}

int max_array(int a[], int n)
{
	int max = a[0];
	for (int *i = a;i<&a[n];i++) {
		if (*i > max) max = *i;
	}
	return max;
}

int count_even(int a[], int n)
{
	int all = n;
	for (int *i = a;i<&a[n];i++) {
		all -= *i % 2;
	}
	return all;
}

int find(int a[], int n, int k)
{
	for (int i = 0; i < n; i++) {
		if (a[i] == k) return i;
	}
	return -1;
}



int my_strlen(char s[])
{
	int all = 0;
	for (char *c = s; *c != 0; c++) {
		all++;
	}
	return all;
}

int count_char(char s[], char k)
{
	int all = 0;
	for (char *c = s; *c != 0; c++) {
		if (*c == k) all++;
	}
	return all;
}

int count_upper(char s[])
{
	int all = 0;
	for (char *c = s; *c != 0; c++) {
		if (*c >= 'A' && *c <= 'Z') all++;
	}
	return all;
}

int is_palindrome_str(char s[])
{
	int n = my_strlen(s);
	for (int i = 0; i<n/2; i++) {
		if (s[i] != s[n-1-i]) return 0;
	}
	return 1;
}



int main()
{
	//int x, y, z;
	
	//scanf("%d %d %d", &x, &y, &z);

	//printf("%d", sum_digits(x));	

	//int a[56] = {1, 2, 2, 3}, n = 3;

	//printf("%d\n", find(a, n, 2));
	

	char str[] = "gog";

printf("%d\n", is_palindrome_str(str));
	return 0;
}
