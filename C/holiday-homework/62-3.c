#include<stdio.h>
#define MAX_NUMBER 10

int find_min_value(int numbers[], int n)
{
				int min = numbers[0];

				for (int i = 0; i < n; i++) {
								if (min > numbers[i])
												min = numbers[i];
				}

				return min;
}


int main(void)
{
				int i = 0;
				int a[MAX_NUMBER] = {0};

				for (;i < MAX_NUMBER; i++) {
								scanf("%d", &a[i]);
				}

				int min = find_min_value(a, i + 1);

				printf("%d", min);

				return 0;
}
