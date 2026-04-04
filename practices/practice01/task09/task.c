#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("2: YES\n");
	}
	else {
		printf("2: NO\n");
	}

	if (a % 3 == 0){
		printf("3: YES\n");
	}
	else {
		printf("3: NO\n");
	}

	return 0;
}
