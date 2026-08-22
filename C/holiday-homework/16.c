#include<stdio.h>
int main()
{
	int i , j, k;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		printf("*");
		for (k = 1; k <= 10 - 2 * i; k++) {
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
