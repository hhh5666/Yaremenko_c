#include<stdio.h>

int main() {
	long int sec;

	scanf("%li", &sec);

	int h = sec / 3600, m = sec % 3600 / 60, s = sec % 60;
	
	printf("time: %d:%d:%d\n", h, m, s);	

	return 0;
}
